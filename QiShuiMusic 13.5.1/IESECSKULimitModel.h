@interface IESECSKULimitModel : IESECBaseApiModel
@property (nonatomic) q maxUserLimit;
@property (nonatomic) Q minUserLimit;
@property (nonatomic) NSString maxlimitToast;
@property (nonatomic) NSString minLimitToast;
@property (nonatomic) NSString limitText;
@property (nonatomic) NSString limitType;
@property (nonatomic) NSString orderURL;
@property (nonatomic) BOOL closeHalfSKU;
- (BOOL)closeHalfSKU;
- (id)limitText;
- (id)limitType;
- (long long)maxUserLimit;
- (id)maxlimitToast;
- (id)minLimitToast;
- (unsigned long long)minUserLimit;
- (void)setCloseHalfSKU:;
- (void)setLimitText:;
- (void)setLimitType:;
- (void)setMaxUserLimit:;
- (void)setMaxlimitToast:;
- (void)setMinLimitToast:;
- (void)setMinUserLimit:;
- (void).cxx_destruct;
- (id)orderURL;
- (void)setOrderURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
