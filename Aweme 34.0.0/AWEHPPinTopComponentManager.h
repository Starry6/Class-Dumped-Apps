@interface AWEHPPinTopComponentManager : NSObject
@property (nonatomic) <AWEPzEngineProtocol> engine;
@property (nonatomic) q showingCount;
@property (nonatomic) AWEHPPinTopUIContext pinTopUIContext;
@property (nonatomic) AWEHPPinTopObserverManager observerManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (void)showWithContext:onClose:;
- (id)observerManager;
- (void)generatePinTopTaskWithModel:completion:;
- (void)asyncShowPinTopComponentWithChannelID:componentConfig:task:showOnVC:showResult:resultCompletion:;
- (long long)showingCount;
- (void)handlePinTopCompletionWithTask:result:;
- (id)generateBusinessContextWithUIContext:;
- (void)handlePinTopComponentShowWithTask:result:;
- (void)handlePinTopComponentDismissWithTask:type:;
- (void)handlePinTopComponentConfirmWithTask:;
- (void)handlePinTopSuccessBubbleShowWithTask:result:;
- (void)setPinTopUIContext:;
- (void)p_allNewTryPinTopWithModel:completion:;
- (id)p_generatePinTopComponentUIWithConfig:;
- (void)showPinTopUIWithContext:;
- (id)pinTopUIContext;
- (id)createPinTopTask;
- (void)setShowingCount:;
- (void)setObserverManager:;
- (id)init;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
