@interface AWEPaySKMAmountInfo : JSONModel
@property (nonatomic) q total;
@property (nonatomic) NSString currency;
- (void).cxx_destruct;
- (long long)total;
- (id)currency;
- (void)setCurrency:;
- (void)setTotal:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
