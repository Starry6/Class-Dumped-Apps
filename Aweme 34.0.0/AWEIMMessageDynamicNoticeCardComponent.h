@interface AWEIMMessageDynamicNoticeCardComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMWebImageViewPresenter leftIconImageView;
@property (nonatomic) AWEIMYYLabelPresenter label;
@property (nonatomic) AWEIMUIImageViewPresenter rightArrowImageView;
@property (nonatomic) BOOL shouldShowLeftIcon;
@property (nonatomic) BOOL interactionStyleIsFull;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)leftIconImageView;
- (void)setLeftIconImageView:;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (void)setShouldShowLeftIcon:;
- (void)setInteractionStyleIsFull:;
- (BOOL)interactionStyleIsFull;
- (void)didTapNoticeCard;
- (BOOL)shouldShowLeftIcon;
- (void)updatePresenterWithHasBackgroundImg:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (id)componentManager;
@end
