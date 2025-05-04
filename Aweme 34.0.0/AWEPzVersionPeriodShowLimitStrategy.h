@interface AWEPzVersionPeriodShowLimitStrategy : NSObject
@property (nonatomic) <AWEPzStrategyModelProtocol> configModel;
@property (nonatomic) AWEPzVersionPeriodShowLimitStrategyDataModel dataModel;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithModel:;
- (id)configModel;
- (void)setConfigModel:;
- (void)showComponent:;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)verify:;
- (long long)getVersionShowCountOfComponent:;
- (void)increaseVersionShowCountOfComponent:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
+ (id)mmkv;
@end
