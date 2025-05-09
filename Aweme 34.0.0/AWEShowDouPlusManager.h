@interface AWEShowDouPlusManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) <AWEShowDouPlusManagerDelegate> delegate;
@property (nonatomic) AWEDouPlusToastInfoResponseModel douplusInfoModel;
@property (nonatomic) @? shareActionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)setShareActionBlock:;
- (id)shareActionBlock;
- (void)fetchDouPlusGuideInfoInFeedScene;
- (void)showDouPlusIconReverseInFeedSceneTargetView:;
- (void)showDouPlusGuideBubbleAlignWithTargetView:inContainerView:inDirection:;
- (void)showDouPlusGuideBubbleInInteractionSceneWithTargetView:inContainerView:inDirection:;
- (void)showDouPlusGuideBubbleInInteractionSceneAfterCommentPanelDismissWithTargetView:inContainerView:;
- (void)showDouPlusGuideBubbleAfterPublishWithTargetView:referString:inContainerView:inDirection:shareCompletionBlock:;
- (void)douplusWillReverseIconFromUserProfile:;
- (BOOL)canShowDouPlusGuide;
- (id)douplusInfoModel;
- (void)showDouPlusToastBubbleIfNeededAlignWithTargetView:inContainerView:inDirection:;
- (id)trackIconAnimSuffixWithType:;
- (void)handleDouPlusToastShowWithBubble:;
- (void)handleDouPlusToastTrackShowEventWithExtraParams:isCurrentUser:;
- (void)prefechNewDouPlusIconInfoWith:;
- (void)setDouplusInfoModel:;
- (id)trackBubbleSuffixWithType:;
- (void)prefetchNewDouPlusIconInfoInInteractionSceneIfNeeded;
- (void)prefetchNewDouPlusIconInfoInHomepageSceneIfNeeded;
- (void)p_clickDouPlusBubbleAction;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
