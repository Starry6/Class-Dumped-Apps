@interface IESECGoodsInstallmentTextHigherModel : IESECBaseApiModel
@property (nonatomic) q startIndex;
@property (nonatomic) q endIndex;
- (void)setStartIndex:;
- (long long)startIndex;
- (void)setEndIndex:;
- (long long)endIndex;
+ (id)JSONKeyPathsByPropertyKey;
@end
