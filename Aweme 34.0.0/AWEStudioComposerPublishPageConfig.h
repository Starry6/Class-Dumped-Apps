@interface AWEStudioComposerPublishPageConfig : AWEStudioComposerBasePageConfig
@property (nonatomic) AWEStudioComposerPublishBasicFeature basicFeature;
@property (nonatomic) AWEStudioComposerPublishNaviFeature naviFeature;
@property (nonatomic) AWEStudioComposerPublishFooterFeature footerFeature;
@property (nonatomic) AWEStudioComposerPublishCoverFeature coverFeature;
@property (nonatomic) AWEStudioComposerPublishInputFeature inputFeature;
@property (nonatomic) AWEStudioComposerPublishHashTagRecommendFeature hashTagRecommendFeature;
@property (nonatomic) AWEStudioComposerPublishPOIFeature poiFeature;
@property (nonatomic) AWEStudioComposerPublishUndefinedFeature undefinedFeature;
@property (nonatomic) AWEStudioComposerPublishRequiredFeature coreFeature;
@property (nonatomic) AWEStudioComposerPublishPrivacySettingFeature privacySettingFeature;
- (id)basicFeature;
- (id)naviFeature;
- (id)footerFeature;
- (id)coverFeature;
- (id)inputFeature;
- (id)hashTagRecommendFeature;
- (id)poiFeature;
- (id)undefinedFeature;
- (id)coreFeature;
- (id)privacySettingFeature;
- (void).cxx_destruct;
@end
