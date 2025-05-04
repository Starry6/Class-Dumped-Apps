@interface AWEHPTabLandingRollBackConfig : NSObject
@property (nonatomic) <AWEHPTabLandingRollBackComponentConfigProtocol> styleConfig;
@property (nonatomic) @? rollBackCallBack;
@property (nonatomic) @? handleRollBackBlock;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q needRollBackSecondLevelPage;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setNeedRollBackSecondLevelPage:;
- (void)setStyleConfig:;
- (id)styleConfig;
- (id)rollBackCallBack;
- (void)setRollBackCallBack:;
- (id)handleRollBackBlock;
- (void)setHandleRollBackBlock:;
- (long long)needRollBackSecondLevelPage;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
