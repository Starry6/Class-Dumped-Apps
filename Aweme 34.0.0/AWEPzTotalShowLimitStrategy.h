@interface AWEPzTotalShowLimitStrategy : NSObject
@property (nonatomic) AWEPzTotalShowLimitStrategyDataModel dataModel;
@property (nonatomic) <AWEPzStrategyModelProtocol> configModel;
@property (nonatomic) BOOL dataError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithModel:;
- (id)configModel;
- (void)setConfigModel:;
- (BOOL)verify:;
- (long long)queryShowCountWithComponentID:secUid:engine:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
- (BOOL)dataError;
- (void)setDataError:;
@end
