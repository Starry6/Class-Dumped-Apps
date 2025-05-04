@interface AWESearchLikeComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView likeIcon;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)likeIcon;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewLayoutSubviews;
- (void)setLikeIcon:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (id)countLabel;
- (void)setCountLabel:;
+ (id)componentSizeForModel:width:;
@end
