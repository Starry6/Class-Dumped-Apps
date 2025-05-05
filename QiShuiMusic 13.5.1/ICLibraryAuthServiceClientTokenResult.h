@interface ICLibraryAuthServiceClientTokenResult : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) q generatedAtMillis;
@property (nonatomic) q timeToLiveMillis;
@property (nonatomic) q lifespanMillis;
@property (nonatomic) ICLibraryAuthServiceClientTokenIdentifier tokenIdentitifer;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL isExpired;
- (id)token;
- (BOOL)isExpired;
- (id)initWithResponseDictionary:;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (long long)timeToLiveMillis;
- (long long)generatedAtMillis;
- (long long)lifespanMillis;
- (id)tokenIdentitifer;
+ (BOOL)supportsSecureCoding;
@end
