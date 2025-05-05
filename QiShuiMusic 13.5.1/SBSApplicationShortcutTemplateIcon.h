@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon
@property (nonatomic) NSString templateImageName;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithTemplateImageName:;
- (id)_initForSubclass;
- (id)templateImageName;
@end
