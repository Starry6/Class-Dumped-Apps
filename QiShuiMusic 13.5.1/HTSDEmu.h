@interface HTSDEmu : NSObject
+ (id)fetchModelListWithRequest:completion:;
+ (id)fetchModule:toDirecotry:requestType:completion:;
+ (id)fetchModulesWithRequest:toDirecotry:completion:;
+ (id)fetchModulesWithRequest:toDirecotry:progress:completion:;
+ (void)handleModuleListRequestData:error:request:moduleRequest:statusCode:responseDescription:completion:;
+ (void)handleModuleRequestWithData:zipTmpPath:aModel:error:toDirecotry:urlString:completion:;
+ (id)startFetchModelListWithRequest:completion:;
+ (id)startFetchModule:toDirecotry:requestType:completion:;
+ (id)statusMap:;
+ (void)unzipZipFile:toDirecotry:completion:;
@end
