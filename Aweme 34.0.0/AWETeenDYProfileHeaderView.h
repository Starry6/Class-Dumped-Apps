@interface AWETeenDYProfileHeaderView : AWETeenProfileHeaderView
@property (nonatomic) UIButton avatarEditButton;
@property (nonatomic) UILabel introLabel;
@property (nonatomic) UIView avatarBackgoundView;
@property (nonatomic) AWETeenProfileSocialStatisticView socialStatisticView;
@property (nonatomic) BOOL isAvatarUnreadCircleShown;
@property (nonatomic) @? handlePanGestureBlock;
@property (nonatomic) UIPanGestureRecognizer panGesture;
- (id)avatarBackgoundView;
- (id)avatarEditButton;
- (id)socialStatisticView;
- (id)handlePanGestureBlock;
- (double)signatureTop;
- (BOOL)isCenterStyle;
- (double)profileAvatarWidth;
- (double)originYOfSocialStatisticView;
- (void)setAvatarEditButton:;
- (void)setAvatarBackgoundView:;
- (void)setSocialStatisticView:;
- (BOOL)isAvatarUnreadCircleShown;
- (void)setIsAvatarUnreadCircleShown:;
- (void)setHandlePanGestureBlock:;
- (void).cxx_destruct;
- (id)panGesture;
- (void)setPanGesture:;
- (id)introLabel;
- (void)setIntroLabel:;
@end
