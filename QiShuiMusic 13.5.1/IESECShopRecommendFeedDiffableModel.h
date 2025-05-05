@interface IESECShopRecommendFeedDiffableModel : NSObject
@property (nonatomic) NSString authorId;
@property (nonatomic) NSString secAuthorId;
@property (nonatomic) q followStatus;
@property (nonatomic) NSMutableArray cards;
@property (nonatomic) Q productCardType;
@property (nonatomic) NSMutableArray goods;
@property (nonatomic) BOOL shopProducts;
- (unsigned long long)productCardType;
- (void)setSecAuthorId:;
- (id)diffIdentifier;
- (long long)followStatus;
- (id)goods;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isShopProducts;
- (id)mixCardModelWithType:;
- (id)secAuthorId;
- (void)setCards:;
- (void)setFollowStatus:;
- (void)setGoods:;
- (void)setProductCardType:;
- (void)setShopProducts:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)cards;
- (id)authorId;
- (void)setAuthorId:;
@end
