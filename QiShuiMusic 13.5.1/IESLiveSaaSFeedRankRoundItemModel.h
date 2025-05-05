@interface IESLiveSaaSFeedRankRoundItemModel : NSObject
@property (nonatomic) q changeTime;
@property (nonatomic) NSArray rankLists;
@property (nonatomic) # cellClass;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (long long)changeTime;
- (id)enterFrom;
- (id)enterMethod;
- (id)initWithModel:store:;
- (id)itemSizeInCollectionView:;
- (id)rankLists;
- (void)setChangeTime:;
- (void)setEnterFrom:;
- (void)setRankLists:;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setCellClass:;
@end
