@interface AWEECOMIMChatListTitleCenterView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView deleteView;
@property (nonatomic) UIImageView deleteImageView;
@property (nonatomic) @? deleteActionBlock;
- (id)deleteView;
- (id)deleteImageView;
- (void)setDeleteView:;
- (void)setDeleteImageView:;
- (void)setDeleteActionBlock:;
- (void)updateWithDeleteViewHidden:totalUnreadNum:;
- (void)deleteViewTap;
- (id)deleteActionBlock;
- (id)unreadStringForDisplay:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)containerView;
- (void)updateConstraints;
- (BOOL)isDarkTheme;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (double)totalWidth;
- (double)totalHeight;
@end
