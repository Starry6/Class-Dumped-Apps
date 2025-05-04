@interface AWEAdPreloadComponentService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)dataReceived:context:;
+ (void)preloadStart:;
+ (void)preloadStart:context:extraData:;
+ (void)preloadResult:forComponent:;
+ (void)preloadResult:forComponent:extraData:;
+ (void)preloadResult:forComponent:context:extraData:;
+ (void)showResult:forComponent:;
+ (void)showResult:forComponent:onPhase:;
+ (void)showResult:forComponent:onPhase:extraData:;
+ (void)showResult:forComponent:onPhase:extraData:context:;
+ (void)adtraceSelect:context:;
+ (void)adtraceTryShow:context:;
+ (void)adtraceTryShow:extraData:context:;
+ (id)addCommonParamsToDict:component:;
+ (void)calculateInfoForComponent:previousStage:currentStage:completion:;
+ (BOOL)enabled;
@end
