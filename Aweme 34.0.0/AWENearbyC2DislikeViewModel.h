@interface AWENearbyC2DislikeViewModel : AWEDoubleColumnDislikeViewModel
@property (nonatomic) q pageType;
- (id)commonParams;
- (void)sendDislikeRequest:extraInfo:;
- (id)dislikeSectionData:;
- (id)feedbackSectionData:;
- (void)trackDislikeWithType:;
- (void)afterDismissFeedbackWithIndexPath:;
- (void)trackDislikePanelShow;
- (id)sectionData:;
- (void)trackDislike:;
- (void)setPageType:;
- (long long)pageType;
+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;
+ (id)dislikeDataSource:;
@end
