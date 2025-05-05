@interface AMSBadgeRequest : NSObject
@property (nonatomic) NSString badgeIdentifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSDictionary metrics;
- (id)bundleIdentifier;
- (id)metrics;
- (BOOL)enabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPushPayload:;
- (id)badgeIdentifier;
+ (BOOL)supportsSecureCoding;
@end
