@interface AWEShowBottomButtonAdUnlockPlugin : NSObject
@property (nonatomic) AWEShowBottomButtonConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateProgressInfoWithHub:;
- (void)configureWithHub:config:;
- (void)handleClickWithHub:config:;
- (BOOL)shouldActiveWithHub:;
- (void)didRegisterWithHub:;
- (void)willUnregisterWithHub:;
- (void)setConfig:;
- (id)config;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
