let toHex = function (num) {
  if (num === 0) return "0";

  const hex = "0123456789abcdef";
  let result = "";

  while (num !== 0) {
    let remainder = num & 15;

    result = hex[remainder] + result;

    num = num >>> 4;
  }

  return result;
};
