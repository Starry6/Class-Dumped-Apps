@interface IESLiveSaaSLayoutContainerItem : BDDynamicModel
@property (nonatomic) NSMutableSet hiddenReasons;
@property (nonatomic) NSString viewType;
@property (nonatomic) IESLiveSaaSLayoutContainerView view;
@property (nonatomic) UIView contentView;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL hasRemoved;
- (void)bindingView:insets:size:;
- (id)hiddenReasons;
- (BOOL)isHiddenForReason:;
- (void)remakeInsets:size:;
- (void)setHidden:forReason:;
- (void)setHiddenReasons:;
- (id)contentView;
- (id)viewType;
- (void)setInsets:;
- (id)insets;
- (id)view;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (void)setSize:;
- (id)size;
- (void)setViewType:;
@end
