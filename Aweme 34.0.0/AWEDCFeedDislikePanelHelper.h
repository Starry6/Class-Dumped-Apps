@interface AWEDCFeedDislikePanelHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)dislikeTextConfig;
+ (id)liveDislikeArray:;
+ (id)videoDislikeArray:;
+ (id)liveFeedbackInfoArray:;
+ (id)feedbackInfoArray:;
+ (id)configFeedbackTitleWithContext:;
+ (id)configSectionArrayWithContext:;
+ (id)dislikeLongPressPanelConfig;
+ (void)sendDislikeRequestWithModel:referString:enterMethod:context:extraInfo:completion:;
+ (void)trackRevokeFeedbackWithModel:referString:enterMethod:feedbackInfo:extraParams:;
+ (void)trackDislikeWithAwemeModel:dislikeType:context:;
+ (BOOL)calculatePanelHeightAfterConfig:context:;
+ (BOOL)useAdaptiveHeight:context:;
+ (BOOL)needRearrangeDislikePanelSection:context:;
+ (id)reArrangedDislikePanelSectionDataWithAwemeModel:dislikeSectionData:feedbackSection:watchLaterSectionData:context:;
+ (double)headerHeightForSection:viewModel:context:;
+ (double)cellWidthForIndexPath:viewModel:context:;
+ (id)dislikeSectionData:context:;
+ (id)feedbackSectionData:context:;
+ (id)feedbackSectionDataUseConfig:context:;
+ (id)watchLaterSectionData:context:;
@end
