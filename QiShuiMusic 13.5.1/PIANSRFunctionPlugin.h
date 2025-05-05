@interface PIANSRFunctionPlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)engine:onLoadStart:;
- (void)engine:onURLChange:;
- (void)injectBridgeAPIWithEngine:URL:;
- (id)tryLoadingNSRContentHTML:engine:;
+ (void)addNSREnabledPVEvent:engine:;
+ (void)addNSRHitPVEvent:engine:;
+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
@end
