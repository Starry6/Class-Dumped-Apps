@interface IESLiveAnnotationManager : NSObject
@property (nonatomic) NSMutableDictionary rpcService2nativeService;
- (id)dataWithRoot:;
- (id)getAnnotationModel:onRoot:withKey:;
- (id)rpcService2nativeService;
- (void)setRpcService2nativeService:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
