@interface AWECommentVCHeaderBarComponent : UIView
@property (nonatomic) AWECommentVCHeaderBarView barView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q barType;
@property (nonatomic) BOOL isFromMaskVC;
@property (nonatomic) BOOL isFromDescriptionPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBarType:;
- (void)updateUIInVideoDescriptionPanelIfNeeded;
- (void)setIsFromMaskVC:;
- (void)setIsFromDescriptionPanel:;
- (BOOL)isFromDescriptionPanel;
- (void)updateWithAwemeModel:referString:enterSource:;
- (void)setBarViewStatus;
- (void)setBarViewFromDescriptionPanel;
- (BOOL)isFromMaskVC;
- (void)setModel:;
- (unsigned long long)barType;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (double)viewHeight;
- (id)barView;
- (void)setBarView:;
@end
