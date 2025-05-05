@interface AFSpeechRecordingAlertBehavior : NSObject
@property (nonatomic) q style;
@property (nonatomic) q beepSoundID;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)description;
- (long long)style;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStyle:beepSoundID:;
- (long long)beepSoundID;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
