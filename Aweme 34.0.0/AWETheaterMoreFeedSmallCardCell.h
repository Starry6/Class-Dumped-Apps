@interface AWETheaterMoreFeedSmallCardCell : UICollectionViewCell
@property (nonatomic) AWETheaterMoreFeedSectionItem sectionItem;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) AWEMVDislikeRevokableView dislikeRevokableView;
@property (nonatomic) BDImageView coverImageView;
@property (nonatomic) AWEFeedInsetsLabel tagLabel;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UILabel updateInfoLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel videoTagInfoLabel;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) @? longPressedBlock;
@property (nonatomic) @? revokeFeedbackBlock;
@property (nonatomic) NSDictionary feedbackInfo;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)feedbackInfo;
- (void)setFeedbackInfo:;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)longPressedBlock;
- (void)showFeedbackMask;
- (void)dismissFeedbackMask;
- (void)setLongPressedBlock:;
- (id)revokeFeedbackBlock;
- (void)setRevokeFeedbackBlock:;
- (void)updateCoverImage:;
- (void)configWithSectionItem:context:logExtraDict:;
- (void)updateCoverTag:;
- (id)updateInfoLabel;
- (void)setUpdateInfoLabel:;
- (void)gotoLongVideoDetailPage;
- (void)addFeedbackViews;
- (void)moreButtonPressed:forEvent:;
- (id)videoTagInfoLabel;
- (id)dislikeRevokableView;
- (void)revokeButtonPressed:;
- (void)handleResponseClicked;
- (void)longPressedGestureRecognized:;
- (void)setDislikeRevokableView:;
- (void)setVideoTagInfoLabel:;
- (id)gradientView;
- (id)initWithFrame:;
- (id)moreButton;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (void)setGradientView:;
- (id)titleLabel;
- (id)context;
- (void)setupSubviews;
- (void)setSectionItem:;
- (id)sectionItem;
+ (id)logScenePrefix;
@end
