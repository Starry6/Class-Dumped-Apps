@interface IESLiveAioLinkRegisterManager : NSObject
@property (nonatomic) NSMutableDictionary nativeServiceDic;
@property (nonatomic) NSMutableDictionary lynxServiceDic;
@property (nonatomic) BOOL isSwizzled;
- (void)clearService;
- (id)lynxServiceDic;
- (id)lynxServices;
- (id)nativeServiceDic;
- (void)registerLynxService:view:;
- (void)registerNativeService:monitorView:;
- (void)setIsSwizzled:;
- (void)setLynxServiceDic:;
- (void)setNativeServiceDic:;
- (id)init;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (BOOL)isSwizzled;
- (id)getService:;
+ (id)shareInstace;
@end
