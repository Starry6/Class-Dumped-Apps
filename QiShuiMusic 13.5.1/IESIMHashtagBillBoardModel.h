@interface IESIMHashtagBillBoardModel : MTLModel
@property (nonatomic) q hashBoardRank;
@property (nonatomic) q hashBoardVersionNo;
@property (nonatomic) NSString hashBoardSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hashBoardSchema;
- (long long)hashBoardRank;
- (long long)hashBoardVersionNo;
- (void)setHashBoardRank:;
- (void)setHashBoardSchema:;
- (void)setHashBoardVersionNo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
