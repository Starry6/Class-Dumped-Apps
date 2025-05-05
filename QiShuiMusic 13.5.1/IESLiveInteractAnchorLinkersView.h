@interface IESLiveInteractAnchorLinkersView : UIView
@property (nonatomic) UIView playerListView;
@property (nonatomic) UIImageView groupBgView;
@property (nonatomic) <IESLiveInteractAnchorLinkersViewDelegate> delegate;
@property (nonatomic) Q alignType;
@property (nonatomic) Q groupStyle;
@property (nonatomic) NSArray selectedUser;
- (void)setGroupBgView:;
- (unsigned long long)alignType;
- (id)groupBgView;
- (unsigned long long)groupStyle;
- (id)initWithDIContext:backgroundColor:;
- (void)p_selectedItemChanged;
- (void)p_setupConstraints;
- (void)p_setupViews:;
- (id)playerListView;
- (void)setAlignType:;
- (void)setGroupStyle:;
- (void)setPlayerListView:;
- (void)updateAllLinkers:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)selectedUser;
@end
