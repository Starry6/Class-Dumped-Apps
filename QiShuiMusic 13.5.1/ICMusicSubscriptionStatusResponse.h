@interface ICMusicSubscriptionStatusResponse : NSObject
@property (nonatomic) BOOL finalResponse;
@property (nonatomic) BOOL needsReload;
@property (nonatomic) ICMusicSubscriptionStatus subscriptionStatus;
@property (nonatomic) NSDictionary propertyListRepresentation;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
- (id)subscriptionStatus;
- (void)setSubscriptionStatus:;
- (void)setNeedsReload:;
- (BOOL)needsReload;
- (BOOL)isExpired;
- (id)propertyListRepresentation;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (BOOL)isFinalResponse;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (void)setFinalResponse:;
- (id)initWithResponseDictionary:expirationDate:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidSubscriptionStatusResponseDictionary:error:;
+ (BOOL)isValidSubscriptionStatusPropertyListRepresentation:error:;
@end
