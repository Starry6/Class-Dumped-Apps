@interface AWEGoodsSKUStock : MTLModel
@property (nonatomic) NSString identifier;
@property (nonatomic) q stockLeft;
@property (nonatomic) NSNumber price;
@property (nonatomic) q userLimit;
@property (nonatomic) BOOL isActivity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)stockLeft;
- (void)setStockLeft:;
- (long long)userLimit;
- (void)setUserLimit:;
- (BOOL)isActivity;
- (void)setIsActivity:;
- (id)price;
- (id)init;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
