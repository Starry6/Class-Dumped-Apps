@interface AMSEngagementDestination : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL allowsResponse;
@property (nonatomic) Q components;
- (unsigned long long)components;
- (void)setComponents:;
- (BOOL)allowsResponse;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setAllowsResponse:;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
