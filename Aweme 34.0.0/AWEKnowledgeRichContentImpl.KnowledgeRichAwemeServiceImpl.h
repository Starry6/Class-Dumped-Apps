@interface AWEKnowledgeRichContentImpl.KnowledgeRichAwemeServiceImpl : HTSService
- (id)getCustomInfoElementViewController;
- (Class)getCustomInfoElementViewControllerClass;
- (id)getDescriptionElementViewController;
- (Class)getDescriptionElementViewControllerClass;
- (id)getButtonElementViewController;
- (id)getGoodsProgressElementViewController;
- (Class)getGoodsProgressElementViewControllerClass;
- (id)createPinchZoomWrapperView;
- (id)createPinchZoomOutNonInteractedTransitionAlbumAnimator;
- (id)createPinchUpdateKeepScaleAnimator;
- (id)createPureModeFullscreenModeSwitcherWithViewController:;
- (id)createPureModePinchKeepScaleGuideManager;
- (BOOL)cellBackgroundNeedSmartColorWithModel:referString:;
- (BOOL)judgeGradientCalculateColorEnableWithAwemeModel:referString:;
- (id)richAwemeSmartBGColorForLynxWithImage:;
- (BOOL)shouldUseMultiContentContainerWithAlbumModel:referString:;
- (BOOL)richAwemeShouldAutoPlayWithModel:refering:shieldSearchForce:logExtraDict:;
- (long long)progressViewTypeEnhanceWithModel:enterModel:refering:logExtraDict:manuallyScrollForce:;
- (long long)progressViewNewTypeWithModel:referString:isPureMode:logExtraDict:defaultPlayMode:;
- (Class)storyImageSectionViewModelClass;
- (id)storyImageSectionViewModelWithModel:pageContext:;
- (BOOL)progressContainerIsVisiableWithModel:progressType:;
- (BOOL)progressContainerChangedSenceWithModel:;
- (Class)inspirationBottomControllerClass;
- (void)preloadImageWithDatasource:currentIndex:referString:;
- (void)preloadImageAndVideoWithDatasource:currentIndex:referString:bizScene:;
- (void)preloadVideoWithDatasource:currentIndex:referString:bizScene:;
- (BOOL)shouldFeedNoteLongTextAdjustActive:;
- (void)trackEndMultiPhotoConsume:enterFrom:videoController:scene:;
- (void)recordLogWithType:subModule:message:fileName:lineNumber:funcName:;
- (id)richAwemeSmartBGColorWithImage:;
- (id)createImageTextComponentManagerWithHandler:sectionViewModel:;
- (id)init;
@end
