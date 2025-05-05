@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon
@property (nonatomic) NSString systemImageName;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)systemImageName;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithSystemImageName:;
- (id)_initForSubclass;
@end
