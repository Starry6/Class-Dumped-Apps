@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon
@property (nonatomic) q type;
@property (nonatomic) NSString systemImageName;
- (void)encodeWithXPCDictionary:;
- (unsigned long long)hash;
- (id)systemImageName;
- (id)initWithXPCDictionary:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)initWithSystemImageName:;
- (id)_initForSubclass;
@end
