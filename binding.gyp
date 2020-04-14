{
  "targets": [
    {
      "target_name": "chnApi",
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "sources": [ 
        "chnApi\chnApi\chnApi.cpp",
        "chnApi\chnApi\game.cpp" ],
      "include_dirs": ["<!@(node -p \"require('node-addon-api').include\")"],
      "dependencies": [ "<!(node -p \"require('node-addon-api').gyp\")"],
      'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ],
    #   'conditions': [
    #     ['OS=="win"', {
    #       "msvs_settings": {
    #         "VCCLCompilerTool": {
    #           "ExceptionHandling": 1
    #         }
    #       }
    #     }],
    #     ['OS=="mac"', {
    #       "xcode_settings": {
    #         "CLANG_CXX_LIBRARY": "libc++",
    #         'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
    #         'MACOSX_DEPLOYMENT_TARGET': '10.7'
    #       }
    #     }]
    #   ]
    }
  ]
}
