@interface CJPayFastPayModel : JSONModel
@property (nonatomic) q timeOut;
@property (nonatomic) q queryMaxTimes;
- (long long)maxQueryTimes;
- (long long)queryMaxTimes;
- (void)setQueryMaxTimes:;
- (void)setTimeOut:;
- (long long)timeOut;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
