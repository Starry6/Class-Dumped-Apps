@interface IESECParamsVerifyJSModule : IESECBaseJSModule
@property (nonatomic) IESECBridgeExcutor excutor;
@property (nonatomic) <IESECParamsVerifyJSModuleDelegate> delegate;
@property (nonatomic) BTDWeakProxy liveContextProxy;
- (id)excutor;
- (BOOL)alogSwitch;
- (BOOL)alogUploadSwitch;
- (void)call:params:callback:;
- (BOOL)customHandle:params:callback:;
- (void)fetch:params:method:callback:data:headers:;
- (id)getStorage:;
- (id)initWithParam:;
- (id)liveContextProxy;
- (void)openSchema:;
- (id)p_getResultWrapperWithCode:result:error:;
- (void)setExcutor:;
- (void)setLiveContextProxy:;
- (void)setStorage:value:;
- (void)terminate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)getExcutorWithContext:;
+ (id)methodLookup;
+ (id)name;
@end
