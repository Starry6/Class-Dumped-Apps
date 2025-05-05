@interface UIWindowSceneActivationRequestOptions : UISceneActivationRequestOptions
@property (nonatomic) NSString _interactionIdentifier;
@property (nonatomic) Q _preferredSizeCategory;
@property (nonatomic) BOOL _preserveLayout;
@property (nonatomic) UISceneConfiguration _quickLookSceneConfiguration;
@property (nonatomic) Q preferredPresentationStyle;
- (id)_descriptionProperties;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)preferredPresentationStyle;
- (void)setPreferredPresentationStyle:;
- (void)_setQuickLookSceneConfiguration:;
- (id)_interactionIdentifier;
- (void)_setInteractionIdentifier:;
- (unsigned long long)_preferredSizeCategory;
- (void)_setPreferredSizeCategory:;
- (BOOL)_preserveLayout;
- (void)_setPreserveLayout:;
- (id)_quickLookSceneConfiguration;
@end
