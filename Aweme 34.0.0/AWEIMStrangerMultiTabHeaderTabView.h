@interface AWEIMStrangerMultiTabHeaderTabView : UIView
@property (nonatomic) q index;
@property (nonatomic) AWEIMStrangerMultiTabHeaderTabModel model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView unreadView;
@property (nonatomic) UILabel unreadLabel;
@property (nonatomic) UIView titleContainer;
- (void)configWithModel:;
- (id)unreadLabel;
- (void)setUnreadLabel:;
- (id)unreadView;
- (void)setUnreadView:;
- (void)refersh;
- (void)setIndex:;
- (void)setModel:;
- (long long)index;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleContainer:;
- (id)titleContainer;
@end
