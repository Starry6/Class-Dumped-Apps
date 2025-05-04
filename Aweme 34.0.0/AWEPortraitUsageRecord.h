@interface AWEPortraitUsageRecord : NSObject
@property (nonatomic) q usage;
@property (nonatomic) BOOL not_found;
- (id)toJSONDict;
- (BOOL)not_found;
- (void)setNot_found:;
- (long long)usage;
- (void)encodeWithCoder:;
- (void)setUsage:;
- (id)initWithCoder:;
+ (id)recordWithUsage:;
@end
