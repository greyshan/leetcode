var hammingDistance = function (x, y) {
  let xor = x ^ y;
  let count = 0;

  while (xor > 0) {
    if (xor % 2 === 1) {
      count++;
    }

    xor = Math.floor(xor / 2);
  }

  return count;
};
