@interface AWENearbySkylightTopicView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) <AWENearbySkyLightElementViewActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__buildUI;
- (void)__layoutUI;
- (unsigned long long)elementViewType;
- (id)initWithFrame:edgeInsets:;
- (id)edgeInsets;
- (id)contentView;
- (void)setEdgeInsets:;
- (void)setTitleLabel:;
- (void)setData:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
@end
