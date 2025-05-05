@interface INVoiceShortcut : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSString invocationPhrase;
@property (nonatomic) INShortcut shortcut;
- (id)intent;
- (id)initWithUserActivity:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)userActivity;
- (id)description;
- (id)shortcut;
- (id)initWithIntent:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithIdentifier:invocationPhrase:shortcut:;
- (id)_initWithVCVoiceShortcut:;
- (id)invocationPhrase;
+ (BOOL)supportsSecureCoding;
@end
