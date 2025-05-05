@interface IESLiveEmoticonTabItemView : UIView
@property (nonatomic) IESLiveCommentEmoticonPageItem pageItem;
@property (nonatomic) UILabel title;
@property (nonatomic) UIImageView pageIcon;
@property (nonatomic) UIView container;
- (id)initWithFrame:pageItem:;
- (id)pageIcon;
- (id)pageItem;
- (void)setPageIcon:;
- (void)setPageItem:;
- (void)setContainer:;
- (id)container;
- (void)setSelected:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setupViews;
@end
