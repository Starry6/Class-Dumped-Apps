@interface IDSFirewallEntry : NSObject
@property (nonatomic) NSString mergeID;
@property (nonatomic) BOOL isDonated;
@property (nonatomic) IDSURI uri;
@property (nonatomic) NSDate lastSeen;
- (id)uri;
- (id)initWithURI:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)lastSeen;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithURI:andLastSeenDate:;
- (id)mergeID;
- (void)setMergeID:;
- (BOOL)isDonated;
- (void)setIsDonated:;
+ (BOOL)supportsSecureCoding;
@end
