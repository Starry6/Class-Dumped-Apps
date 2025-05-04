@interface AWETemplateTagsUnfollowFamiliarStrategy : AFDTemplateTagsBaseStrategy
- (void)viewController_viewDidAppear;
- (void)didTriggerEvent:;
- (long long)templateType;
+ (BOOL)shouldActiveWithModel:context:;
+ (void)prepareWithModel:context:;
+ (BOOL)isInvalidScene:;
+ (id)prepareGeneralLabelModelWithRecommendReason:;
+ (id)getUnfollowFamiliarTagModelWithModel:;
+ (void)downgradeUnfollowFamiliarTagWithModel:context:;
+ (id)findRecommendReasonWithModel:;
+ (void)preprocessTextWithModel:filterRecommendReason:;
+ (void)downgradeAvatarWithModel:;
@end
