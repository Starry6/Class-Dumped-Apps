@interface AWEPaySwiftImpl.CCMWorkerManager : NSObject
- (void)callbackResultWithId:result:;
- (void)callbackErrorWithId:errCode:result:;
- (void)handleMessage:;
- (id)init;
- (void).cxx_destruct;
- (void)handleError:;
@end
