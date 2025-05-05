@interface IESECCartBusinessLineCount : IESECBaseApiModel
@property (nonatomic) q businessLineID;
@property (nonatomic) q cartCount;
- (long long)businessLineID;
- (long long)cartCount;
- (void)setBusinessLineID:;
- (void)setCartCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
