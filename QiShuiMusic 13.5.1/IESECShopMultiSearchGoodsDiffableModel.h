@interface IESECShopMultiSearchGoodsDiffableModel : NSObject
@property (nonatomic) NSString authorId;
@property (nonatomic) NSString secAuthorId;
@property (nonatomic) NSMutableArray goods;
@property (nonatomic) q followStatus;
@property (nonatomic) Q productCardType;
- (unsigned long long)productCardType;
- (void)setSecAuthorId:;
- (id)diffIdentifier;
- (long long)followStatus;
- (id)goods;
- (BOOL)isEqualToDiffableObject:;
- (id)secAuthorId;
- (void)setFollowStatus:;
- (void)setGoods:;
- (void)setProductCardType:;
- (void).cxx_destruct;
- (id)authorId;
- (void)setAuthorId:;
@end
