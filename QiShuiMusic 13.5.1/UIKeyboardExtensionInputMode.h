@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode
@property (nonatomic) NSExtension extension;
- (void)setPrimaryLanguage:;
- (void)setExtension:;
- (id)extension;
- (BOOL)showSWLayoutWithHWKeyboard;
- (id)displayName;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (id)containingBundle;
- (id)identifierWithLayouts;
- (id)normalizedIdentifierLevels;
- (id)extendedDisplayName;
- (BOOL)isDefaultRightToLeft;
- (BOOL)defaultLayoutIsASCIICapable;
- (BOOL)isStalledExtensionInputMode;
- (BOOL)isExtensionInputMode;
- (id)containingBundleDisplayName;
- (BOOL)isAllowedForTraits:;
- (BOOL)isDesiredForTraits:;
- (id)_indicatorIconWithBackground:scaleFactor:;
- (id)hardwareLayout;
@end
