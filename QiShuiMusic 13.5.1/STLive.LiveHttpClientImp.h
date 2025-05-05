@interface STLive.LiveHttpClientImp : NSObject
- (id)handleError:withResponseObj:;
- (id)logIDForResponseObj:;
- (id)requestIdForResponseObj:;
- (id)requestWithParamsModel:;
- (id)uploadFileData:URLString:progress:parameters:completionHandler:fileType:;
- (id)init;
@end
