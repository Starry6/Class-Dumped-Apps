@interface CHSMutableConfiguredWidgetDescriptor : CHSConfiguredWidgetDescriptor
@property (nonatomic) BOOL suggestion;
@property (nonatomic) BOOL systemConfigured;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic) BOOL showsComplicationLabel;
- (void)setShowsWidgetLabel:;
- (void)setSupportsLowLuminance:;
- (void)setSuggestion:;
- (void)setSupportsTinting:;
- (void)setSystemConfigured:;
- (void)setShowsComplicationLabel:;
- (BOOL)showsComplicationLabel;
- (id)copyWithZone:;
@end
