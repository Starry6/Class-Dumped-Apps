@interface IESECLiveVerifyJSModule : IESECParamsVerifyJSModule
@property (nonatomic) BTDWeakProxy liveContextProxy;
- (id)getECActionData;
- (id)initWithParam:;
- (id)liveContextProxy;
- (void)setLiveContextProxy:;
- (void).cxx_destruct;
+ (id)methodLookup;
+ (id)name;
@end
