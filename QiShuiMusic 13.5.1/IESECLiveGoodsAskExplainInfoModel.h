@interface IESECLiveGoodsAskExplainInfoModel : MTLModel
@property (nonatomic) NSNumber status;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSString rankIconUrl;
@property (nonatomic) BOOL canAskExplain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRankIconUrl:;
- (BOOL)canAskExplain;
- (id)rankIconUrl;
- (void)setCanAskExplain:;
- (void)setStatus:;
- (id)rank;
- (void).cxx_destruct;
- (id)status;
- (void)setRank:;
- (id)userCount;
- (void)setUserCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
