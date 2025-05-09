@interface MKInfoCardThemeManager : NSObject
@property (nonatomic) BOOL useSmallFont;
@property (nonatomic) Q themeType;
@property (nonatomic) NSString javaScriptName;
@property (nonatomic) BOOL isDarkTheme;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor lightTextColor;
@property (nonatomic) UIColor tertiaryTextColor;
@property (nonatomic) UIColor tintColor;
@property (nonatomic) UIColor highlightedTintColor;
@property (nonatomic) UIColor separatorLineColor;
@property (nonatomic) UIColor rowColor;
@property (nonatomic) UIColor selectedRowColor;
@property (nonatomic) UIColor disabledActionRowTextColor;
@property (nonatomic) UIColor disabledActionRowBackgroundColor;
@property (nonatomic) UIColor normalActionRowBackgroundColor;
@property (nonatomic) UIColor normalActionRowBackgroundPressedColor;
@property (nonatomic) UIColor headerPrimaryButtonNormalColor;
@property (nonatomic) UIColor headerPrimaryButtonHighlightedColor;
@property (nonatomic) UIColor transitOntimeTextColor;
@property (nonatomic) UIColor transitDelayedTextColor;
@property (nonatomic) UIColor transitChevronBackgroundColor;
@property (nonatomic) UIColor normalBackgroundColor;
@property (nonatomic) UIColor buttonNormalColor;
@property (nonatomic) UIColor buttonHighlightedColor;
@property (nonatomic) UIColor ratingBarStartColor;
@property (nonatomic) UIColor ratingBarEndColor;
@property (nonatomic) UIColor ratingBarBackgroundColor;
@property (nonatomic) UIColor transitIncidentBackgroundColor;
@property (nonatomic) UIColor cardBackgroundColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)ratingBarEndColor;
- (id)tertiaryTextColor;
- (id)normalActionRowBackgroundColor;
- (id)separatorLineColor;
- (id)ratingBarBackgroundColor;
- (id)normalActionRowBackgroundPressedColor;
- (void)_setTheme:;
- (id)disabledActionRowBackgroundColor;
- (BOOL)isDarkTheme;
- (id)tintColor;
- (BOOL)useSmallFont;
- (unsigned long long)_currentSystemTheme;
- (id)selectedRowColor;
- (id)headerPrimaryButtonHighlightedColor;
- (id)cardBackgroundColor;
- (id)buttonHighlightedColor;
- (id)transitChevronBackgroundColor;
- (void)setUseSmallFont:;
- (id)transitOntimeTextColor;
- (id)disabledActionRowTextColor;
- (id)ratingBarStartColor;
- (id)buttonNormalColor;
- (id)lightTextColor;
- (id)highlightedTintColor;
- (unsigned long long)themeType;
- (BOOL)_isInSpotlightContext;
- (void).cxx_destruct;
- (id)rowColor;
- (id)transitIncidentBackgroundColor;
- (id)textColor;
- (id)_initWithThemeType:;
- (id)normalBackgroundColor;
- (id)transitDelayedTextColor;
- (void)_setTintColorProvider:;
- (id)javaScriptName;
- (id)headerPrimaryButtonNormalColor;
+ (void)setTheme:;
+ (void)setTintColorProvider:;
+ (unsigned long long)themeType;
+ (id)currentTheme;
+ (id)themeWithThemeType:;
@end
