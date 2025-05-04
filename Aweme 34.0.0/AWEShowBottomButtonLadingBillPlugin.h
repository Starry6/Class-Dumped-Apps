@interface AWEShowBottomButtonLadingBillPlugin : NSObject
@property (nonatomic) AWEShowBottomButtonConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureWithHub:config:;
- (void)handleClickWithHub:config:;
- (BOOL)shouldActiveWithHub:;
- (void)didRegisterWithHub:;
- (void)willUnregisterWithHub:;
- (void)startShowStandByIAPAnimationWithHub:config:;
- (id)getPaidStreamWithHub:;
- (void)startShowStandByIAPSecondAnimationWithHub:config:;
- (void)setConfig:;
- (void)animationDidStop:finished:;
- (id)config;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
