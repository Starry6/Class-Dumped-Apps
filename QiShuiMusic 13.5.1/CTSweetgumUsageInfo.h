@interface CTSweetgumUsageInfo : NSObject
@property (nonatomic) NSArray accountMetrics;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)accountMetrics;
- (void)setAccountMetrics:;
+ (BOOL)supportsSecureCoding;
@end
