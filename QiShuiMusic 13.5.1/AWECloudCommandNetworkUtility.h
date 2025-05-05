@interface AWECloudCommandNetworkUtility : NSObject
+ (void)_dealWithResultData:ran:error:url:success:failure:;
+ (id)_uploadRequestBodyWithMultiData:params:commonParams:;
+ (id)fileMimeTypeWithPath:;
+ (void)requestWithUrl:requestMethod:params:requestHeaders:needDecodeResponseData:success:failure:;
+ (void)requestWithUrl:requestMethod:params:requestHeaders:success:failure:;
+ (void)uploadDataWithUrl:fileName:data:params:mimeType:requestHeaders:success:failure:;
+ (void)uploadDataWithUrl:fileName:fileType:data:params:commonParams:mimeType:requestHeaders:success:failure:;
+ (void)uploadMultiDataWithUrl:dataArray:params:commonParams:requestHeaders:success:failure:;
@end
