@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties
@property (nonatomic) NSString transport;
@property (nonatomic) NSString language;
@property (nonatomic) NSString layout;
@property (nonatomic) C countryCode;
@property (nonatomic) I standardType;
@property (nonatomic) q subinterfaceID;
@property (nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol;
- (void)setCountryCode:;
- (void)setTransport:;
- (void)setLanguage:;
- (void)setLayout:;
- (void)setGlobeKeyLabelHasGlobeSymbol:;
- (void)setStandardType:;
- (void)setSubinterfaceID:;
- (void)setCapsLockKeyHasLanguageSwitchLabel:;
@end
