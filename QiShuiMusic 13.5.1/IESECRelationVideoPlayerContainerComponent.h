@interface IESECRelationVideoPlayerContainerComponent : UIView
@property (nonatomic) IESECStoreVideoPlayer containerView;
- (void)p_setupUI;
- (void)updateUIWithModel:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
+ (id)containerWithSize:cornerRadius:;
+ (id)containerInDoubleColumn;
+ (id)containerInSingleColumn;
@end
