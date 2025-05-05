@interface ASCWebAuthenticationExtensionsClientInputs : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) BOOL isGoogleLegacyAppIDSupport;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithAppID:isGoogleLegacyAppIDSupport:;
- (BOOL)isGoogleLegacyAppIDSupport;
- (void)setIsGoogleLegacyAppIDSupport:;
+ (BOOL)supportsSecureCoding;
@end
