@interface AWENearbyDislikeViewController : UIViewController
@property (nonatomic) AWENearbyDislikeView view;
@property (nonatomic) AWENearbyDislikeGuideView dislikeGuideView;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? dislikeBlock;
- (id)referString;
- (void)showInView:animated:;
- (id)initWithReferString:;
- (void)dismissDislikeGuideView;
- (void)setDislikeBlock:;
- (void)showDislikeGuideViewWithModel:inView:;
- (void)p_dislike;
- (id)dislikeBlock;
- (void)setDislikeGuideView:;
- (id)dislikeGuideView;
- (void)setModel:;
- (void)loadView;
- (id)model;
- (void).cxx_destruct;
- (void)dismiss:;
@end
