@interface AFRequestCompletionOptions : NSObject
@property (nonatomic) AFTriggerlessListeningOptions triggerlessListeningOptions;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)_initWithShowUIDuringListening:playAlertBeforeListening:;
- (id)triggerlessListeningOptions;
- (void)setTriggerlessListeningOptions:;
+ (BOOL)supportsSecureCoding;
@end
