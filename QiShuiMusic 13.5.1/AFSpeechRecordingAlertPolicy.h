@interface AFSpeechRecordingAlertPolicy : NSObject
@property (nonatomic) AFSpeechRecordingAlertBehavior startingAlertBehavior;
@property (nonatomic) AFSpeechRecordingAlertBehavior stoppedAlertBehavior;
@property (nonatomic) AFSpeechRecordingAlertBehavior stoppedWithErrorAlertBehavior;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithStartingAlertBehavior:stoppedAlertBehavior:stoppedWithErrorAlertBehavior:;
- (id)startingAlertBehavior;
- (id)stoppedAlertBehavior;
- (id)stoppedWithErrorAlertBehavior;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
