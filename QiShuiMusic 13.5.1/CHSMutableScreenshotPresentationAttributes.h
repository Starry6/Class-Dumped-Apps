@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes
@property (nonatomic) q colorScheme;
@property (nonatomic) BOOL allowsPrivacySensitiveContent;
@property (nonatomic) CHSWidgetTintParameters tintParameters;
@property (nonatomic) NSString additionalSettingsContext;
- (void)setTintParameters:;
- (void)setAllowsPrivacySensitiveContent:;
- (void)setAdditionalSettingsContext:;
- (void)setColorScheme:;
@end
