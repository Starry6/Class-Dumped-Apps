@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor
@property (nonatomic) INShortcut shortcut;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)shortcut;
- (id)initWithShortcut:;
+ (BOOL)supportsSecureCoding;
@end
