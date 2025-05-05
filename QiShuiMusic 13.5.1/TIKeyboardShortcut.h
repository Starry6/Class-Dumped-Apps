@interface TIKeyboardShortcut : NSObject
@property (nonatomic) NSString keyEquivalent;
@property (nonatomic) Q modifierFlags;
@property (nonatomic) NSString displayStringOverride;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)modifierFlags;
- (id)description;
- (void)setModifierFlags:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)displayStringOverride;
- (id)keyEquivalent;
- (id)initWithKeyEquivalent:modifierFlags:;
- (id)initWithKeyEquivalent:modifierFlags:displayStringOverride:;
- (void)setKeyEquivalent:;
- (void)setDisplayStringOverride:;
+ (id)localizedKeyboardShortcut:forKeyboardLayout:withAttributes:;
+ (id)localizedKeyboardShortcut:forKeyboardLayout:;
+ (id)shortcutWithKeyEquivalent:modifierFlags:;
+ (BOOL)isMirroringCandidate:;
+ (id)shortcutWithKeyEquivalent:modifierFlags:displayStringOverride:;
+ (id)localizedKeyboardShortcut:forKeyboardLayout:usingKeyboardType:;
+ (id)findLocalizationForKeyboardShortcut:withModifiers:inApplicableOverrides:usingKeyboardType:;
@end
