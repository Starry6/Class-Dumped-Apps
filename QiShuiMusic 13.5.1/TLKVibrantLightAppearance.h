@interface TLKVibrantLightAppearance : TLKLightAppearance
- (id)primaryColor;
- (id)secondaryColor;
- (BOOL)isVibrant;
- (id)tertiaryColor;
- (id)compositingFilter;
- (id)quaternaryColor;
- (id)textColorForColor:;
- (id)name;
- (unsigned long long)style;
- (double)accessibilityContrastColorBoost;
@end
