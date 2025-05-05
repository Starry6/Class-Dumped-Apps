@interface IESECLivePluginLayoutView : UIView
@property (nonatomic) Q type;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
@property (nonatomic) UIView contentView;
@property (nonatomic) @? animationBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pluginLayoutContentInsets;
- (id)pluginLayoutContentSize;
- (void)startShowAnimation:;
- (void)setAnimationBlock:;
- (void)setContentInsets:;
- (id)contentView;
- (id)contentInsets;
- (id)viewType;
- (void)layoutSubviews;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setContentView:;
- (id)animationBlock;
- (void)setContentSize:;
@end
