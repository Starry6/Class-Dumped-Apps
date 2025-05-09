@interface AWERTVInviteGroupCollectionCell : RTVCollectionViewCell
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVXRStateRecorder> xrStateRecorder;
@property (nonatomic) RTVInviteGroupCellModel model;
@property (nonatomic) RTVInviteUserCellContext context;
@property (nonatomic) BDImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView selectStateImageView;
- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:context:;
- (void)willBeginDragging;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)aAWEBrandColorAdapter;
- (void)didEndDisplay;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (id)xrStateRecorder;
- (void)__createDependency;
- (id)__selectStateImage:;
- (id)selectStateImageView;
- (void)__updateComponents;
- (void)setSelectStateImageView:;
- (id)accessibilityLabel;
- (id)injector;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)context;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)avatarImageView;
- (void)willDisplay;
+ (Class)aAWEBrandColorAdapterClass;
@end
