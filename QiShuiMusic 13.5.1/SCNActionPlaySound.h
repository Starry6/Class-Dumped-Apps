@interface SCNActionPlaySound : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)_setupDuration;
+ (BOOL)supportsSecureCoding;
+ (id)playAudioSource:waitForCompletion:;
@end
