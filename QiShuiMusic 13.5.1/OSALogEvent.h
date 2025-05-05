@interface OSALogEvent : NSObject
@property (nonatomic) OSALogIdentity identity;
@property (nonatomic) NSDictionary details;
- (id)identity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)details;
- (id)initWithIdentity:details:;
+ (BOOL)supportsSecureCoding;
@end
