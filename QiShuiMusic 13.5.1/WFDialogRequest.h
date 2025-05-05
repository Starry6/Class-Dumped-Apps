@interface WFDialogRequest : NSObject
@property (nonatomic) WFDialogAttribution attribution;
@property (nonatomic) NSString prompt;
@property (nonatomic) NSString promptForDisplay;
@property (nonatomic) BOOL requiresRunningShortcut;
@property (nonatomic) BOOL shouldCenterPrompt;
- (id)initWithCoder:;
- (id)attribution;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)prompt;
- (id)initWithAttribution:prompt:;
- (id)initWithAppBundleIdentifier:prompt:;
- (id)promptForDisplay;
- (BOOL)shouldCenterPrompt;
- (BOOL)requiresRunningShortcut;
- (void)setRequiresRunningShortcut:;
+ (BOOL)supportsSecureCoding;
@end
