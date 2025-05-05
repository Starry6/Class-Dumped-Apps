@interface IESECTabKitAdvancedSaaSAdapterImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createAnnieCardWithConfiguration:puzzleContext:lifeCycleDelegate:bid:preProcessRsp:enableWebCache:closeAction:;
+ (id)preProcessAnnieXCardModel:bid:;
+ (BOOL)supportAnnieXContainer;
+ (void)triggerBDXWebViewWarmup;
@end
