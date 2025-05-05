@interface AFAccessibilityState : NSObject
@property (nonatomic) q isVoiceOverTouchEnabled;
@property (nonatomic) q isVibrationDisabled;
- (id)init;
- (long long)isVoiceOverTouchEnabled;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIsVoiceOverTouchEnabled:isVibrationDisabled:;
- (long long)isVibrationDisabled;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
