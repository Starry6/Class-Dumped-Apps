@interface AWEModernFeedActionPanelFrame : NSObject
@property (nonatomic) <AWEFeedVideoSingleCardLayoutAdjusterProtocol> layoutAdjuster;
@property (nonatomic) <AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} actionPanelFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} timeLabelFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} likeBtnFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} commentBtnFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} favoriteBtnFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} repostFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} shareBtnFrame;
@property (nonatomic) Q layoutType;
@property (nonatomic) Q browsedType;
@property (nonatomic) BOOL shouldShowRepostButton;
@property (nonatomic) BOOL shouldShowFavoriteButton;
@property (nonatomic) BOOL shouldShowActionPanel;
@property (nonatomic) BOOL shouldShowTimeInfo;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (id)likeBtnFrame;
- (id)commentBtnFrame;
- (id)shareBtnFrame;
- (id)actionPanelFrame;
- (void)setLikeBtnFrame:;
- (void)setCommentBtnFrame:;
- (void)setShareBtnFrame:;
- (void)setActionPanelFrame:;
- (BOOL)shouldShowActionPanel;
- (BOOL)shouldShowTimeInfo;
- (id)timeLabelFrame;
- (BOOL)shouldShowFavoriteButton;
- (id)favoriteBtnFrame;
- (BOOL)shouldShowRepostButton;
- (id)repostFrame;
- (void)configFrameWithAweme:containerWidth:layoutType:browsedType:;
- (void)setBrowsedType:;
- (void)setShouldShowActionPanel:;
- (void)setShouldShowRepostButton:;
- (void)setShouldShowFavoriteButton:;
- (void)setFavoriteBtnFrame:;
- (void)setRepostFrame:;
- (unsigned long long)browsedType;
- (void)setQualityLayoutAdjuster:;
- (id)qualityLayoutAdjuster;
- (id)layoutAdjuster;
- (void)setTimeLabelFrame:;
- (void)setShouldShowTimeInfo:;
- (void)setLayoutAdjuster:;
- (void)setLayoutType:;
- (unsigned long long)layoutType;
- (id)init;
- (void).cxx_destruct;
@end
