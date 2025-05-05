@interface IESECRelationLivePlayerContainerComponent : UIView
@property (nonatomic) UIView containerView;
- (void)p_setupUI;
- (void)updateUIWithModel:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
+ (id)containerInDoubleColumn;
+ (id)containerInSingleColumn;
+ (id)containerWithSize:;
@end
