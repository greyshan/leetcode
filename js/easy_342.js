let isPowerOfFour = function (n) {
  if (n <= 0) return false;

  let result = Math.log(n) / Math.log(4);

  return Number.isInteger(result);
};
