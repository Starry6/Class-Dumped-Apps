@interface WFINShortcutContextualAction : WFContextualAction
@property (nonatomic) INShortcut shortcut;
- (id)uniqueIdentifier;
- (id)icon;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)shortcut;
- (BOOL)isEqual:;
- (id)initWithINShortcut:;
- (id)runDescriptorForSurface:;
- (id)runRequestForSurface:;
+ (BOOL)supportsSecureCoding;
@end
