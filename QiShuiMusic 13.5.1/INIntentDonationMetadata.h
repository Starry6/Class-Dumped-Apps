@interface INIntentDonationMetadata : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (Class)_intentClass;
@end
