@interface AWECFRhubarb : NSObject
+ (void)unzipZipFile:toDirecotry:completion:;
+ (id)fetchModulesWithRequest:toDirecotry:progress:completion:;
+ (id)statusMap:;
+ (id)fetchModulesWithRequest:toDirecotry:completion:;
+ (id)fetchModule:toDirecotry:requestType:completion:;
+ (id)fetchModelListWithRequest:completion:;
+ (id)startFetchModelListWithRequest:completion:;
+ (void)handleModuleListRequestData:error:request:moduleRequest:statusCode:responseDescription:completion:;
+ (id)startFetchModule:toDirecotry:requestType:completion:;
+ (void)handleModuleRequestWithData:zipTmpPath:aModel:error:toDirecotry:urlString:completion:;
@end
