@interface AWEShareTokenNotePlayRemoteCardView : AWEShareTokenNoteBaseCardView
@property (nonatomic) NSArray URLModelList;
@property (nonatomic) UIImageView centerCoverImageView;
@property (nonatomic) UIView blurView;
- (void)setupUIWithModel:;
- (id)initWithModel:URLModelList:;
- (void)setURLModelList:;
- (void)goToPlayRemote;
- (void)setCenterCoverImageView:;
- (id)centerCoverImageView;
- (id)URLModelList;
- (id)blurView;
- (void)setBlurView:;
- (void).cxx_destruct;
@end
