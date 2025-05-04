@interface AWEPublishToNearbyPrivacyManager : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__uid;
- (id)cacheForPublishToNearbyPrivacyType;
- (unsigned long long)nearbyPrivacyDefaultValue;
- (unsigned long long)nearbyPublishPrivacyYellowPointType;
- (unsigned long long)nearbyPrivacyStyle;
- (void)setPublishToNearbyPrivacyTypeCache:;
- (unsigned long long)defaultTypeWithIsPublicVideo:publishToNearbyPrivacyType:;
- (BOOL)shouldShowPublicPrivacyYellowPointOuter;
- (BOOL)shouldShowPublicPrivacyYellowPointInner;
- (BOOL)shouldShowPublicPrivacyBubbleInner;
- (void)setHasShowPublicPrivacyYellowPointOuter:;
- (void)setHasShowPublicPrivacyYellowPointInner:;
- (void)setHasShowPublicPrivacyBubbleInner:;
- (id)publishToNearbyPrivacyHighlightColor;
- (id)publishToNearbyPrivacyNormalColor;
@end
