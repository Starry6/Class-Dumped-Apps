@interface MTStylingProvidingSolidColorLayer : CALayer
@property (nonatomic) NSMutableDictionary cmStylingProviders;
- (id)visualStylingProviderForCategory:;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)_updateVisualStylingProviders;
- (void)_updateVisualStylingProviderForCategory:;
- (id)_styleSetForCategory:;
- (id)_fillLightStyleSet;
- (id)_strokeLightStyleSet;
- (id)_fillDarkStyleSet;
- (id)_strokeDarkStyleSet;
- (id)_styleSetForCategory:withPrimaryStyleDictionary:secondaryStyleDictionary:tertiaryStyleDictionary:;
- (id)_styleSetNameForCategory:;
- (id)cmStylingProviders;
- (void)setCmStylingProviders:;
@end
