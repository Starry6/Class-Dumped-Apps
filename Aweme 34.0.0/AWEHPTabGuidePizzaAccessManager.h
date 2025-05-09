@interface AWEHPTabGuidePizzaAccessManager : NSObject
@property (nonatomic) NSArray limitLabels;
@property (nonatomic) NSArray limitButtons;
- (id)getHPTabGuideLimitComponentInfo;
- (void)startPizzaVerifyWithComponentID:completion:;
- (void)addNotifications;
- (void)updateTabGuideComponentVerifyResult;
- (void)updatePizzaCheckResultWithCandidate:;
- (void)startPizzaVerifyWithAwemeList:enterFrom:completion:;
- (id)generateComponentWithComponentID:;
- (void)handleLabelShow:;
- (void)handleButtonShow:;
- (void)p_startPizzaVerifyWithAweme:enterFrom:completion:;
- (void)p_startPizzaVerifyWithCandidate:completion:;
- (void)p_updateLabelVerifyResult;
- (void)p_updateButtonVerifyResult;
- (id)limitLabels;
- (id)limitButtons;
- (void)p_startPizzaVerifyWithComponent:completion:;
- (void)p_startPizzaVerifyWithCandidateList:completion:;
- (void)setLimitLabels:;
- (void)p_startPizzaVerifyWithComponentType:completion:;
- (void)setLimitButtons:;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;
- (void).cxx_destruct;
+ (id)pizzaEngine;
+ (id)sharedInstance;
@end
