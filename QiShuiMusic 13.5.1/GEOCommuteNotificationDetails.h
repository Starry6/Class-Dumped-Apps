@interface GEOCommuteNotificationDetails : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) NSString commuteDetailsIdentifier;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) q score;
- (id)init;
- (long long)score;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTitle:message:commuteDetailsIdentifier:expirationDate:score:;
- (id)commuteDetailsIdentifier;
+ (BOOL)supportsSecureCoding;
@end
