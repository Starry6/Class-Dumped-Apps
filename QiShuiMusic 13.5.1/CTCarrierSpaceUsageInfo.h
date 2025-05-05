@interface CTCarrierSpaceUsageInfo : NSObject
@property (nonatomic) NSArray accountMetrics;
@property (nonatomic) NSString moreDetailsURL;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)accountMetrics;
- (void)setAccountMetrics:;
- (id)moreDetailsURL;
- (void)setMoreDetailsURL:;
+ (BOOL)supportsSecureCoding;
@end
