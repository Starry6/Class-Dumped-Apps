@interface AWEDetailVideoCutTemplateTracker : NSObject
@property (nonatomic) AWEDetailVideoCutTemplateViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEnterPersonalDetailWithModel:;
- (void)trackClickLinkWithModel:;
- (void)trackFeedEnterWithModel:;
- (void)trackDetailPageClientShowWithModel:;
- (void)trackClickedShootButton;
- (void)trackFavoriteIconShow;
- (void)trackFavoriteActionClickedWithActionType:;
- (void)trackTemplateCollectStateWithTemplateID:templateType:isCollectAction:Error:;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (id)initWithStateContext:;
- (void)trackActionButtonClickWithType:;
- (void)trackEnterTemplateDetail;
- (void)trackVideocutDetailPageShow;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
+ (void)trackActivityEntranceShowWithModel:;
@end
