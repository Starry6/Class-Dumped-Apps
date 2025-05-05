@interface IESECWinTabBFFResponse : IESECBaseApiModel
@property (nonatomic) IESECListKitListModel feed;
@property (nonatomic) NSArray topCardList;
@property (nonatomic) IESECWinBFFBaseInfoModel baseInfo;
- (void)setTopCardList:;
- (id)baseInfo;
- (void)setBaseInfo:;
- (id)topCardList;
- (id)feed;
- (void)setFeed:;
- (void).cxx_destruct;
+ (id)topCardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
