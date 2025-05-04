@interface AWECommentVCHeaderAnchorComponent : UIView
@property (nonatomic) NSObject<AWEFeedAnchorViewManager> anchorViewManager;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary trackParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (id)trackParam;
- (id)anchorViewManager;
- (void)setTrackParam:;
- (BOOL)shouldShowAnchorView;
- (void)updateCartAnchorIfNeeded:;
- (void)setAnchorViewManager:;
- (void)updateAnchorView;
- (void)setAnchorHidden:;
- (BOOL)isAnchorHidden;
- (void)updateWithAwemeModel:referString:interactionViewController:pageContext:;
- (void)setModel:;
- (id)model;
- (void)updateLayout;
- (void).cxx_destruct;
- (double)viewHeight;
@end
