@interface ICMusicSubscriptionStatusTerms : NSObject
@property (nonatomic) q acceptedVersion;
@property (nonatomic) q currentVersion;
@property (nonatomic) q sourceType;
@property (nonatomic) q type;
- (long long)sourceType;
- (long long)currentVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithResponseTermsDictionary:;
- (long long)acceptedVersion;
+ (BOOL)supportsSecureCoding;
@end
