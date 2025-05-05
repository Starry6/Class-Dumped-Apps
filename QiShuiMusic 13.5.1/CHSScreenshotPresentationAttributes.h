@interface CHSScreenshotPresentationAttributes : NSObject
@property (nonatomic) q colorScheme;
@property (nonatomic) BOOL allowsPrivacySensitiveContent;
@property (nonatomic) CHSWidgetTintParameters tintParameters;
@property (nonatomic) NSString additionalSettingsContext;
- (id)tintParameters;
- (unsigned long long)hash;
- (long long)colorScheme;
- (void).cxx_destruct;
- (id)additionalSettingsContext;
- (BOOL)allowsPrivacySensitiveContent;
- (BOOL)isEqual:;
@end
