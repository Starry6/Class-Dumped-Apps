@interface AWEModernFeedVideoFooterNativeView : UIView
@property (nonatomic) UIImageView anchorIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEGeneralSearchPOIAnchorInfoModel anchorInfoModel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString searchId;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isShowNative;
@property (nonatomic) BOOL searchUIQualityAdaption;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) NSDictionary logData;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)searchId;
- (void)setSearchId:;
- (void)setAnchorIcon:;
- (void)trackShowEvent;
- (id)searchKeyword;
- (void)setSearchKeyword:;
- (id)anchorIcon;
- (void)sendShowEventIfNeeded;
- (void)didStartShowing;
- (void)didEndShowing;
- (void)singleTapped:;
- (id)p_getTrackParams;
- (void)setModelOnly:;
- (BOOL)isShowNative;
- (void)setIsShowNative:;
- (id)anchorInfoModel;
- (void)setAnchorInfoModel:;
- (id)p_getLifeTrackParams;
- (void)updateUIWithSearchUIQualityAdaption:;
- (void)sendDismissEventIfNeeded;
- (BOOL)isSearchUIQualityAdaption;
- (void)setSearchUIQualityAdaption:;
- (id)searchUIQualityAnchorIconImage;
- (id)anchorIconImage;
- (void)updateUILayoutToAdaptSearchUIQuality;
- (void)setModel:;
- (id)init;
- (id)logData;
- (BOOL)isShowing;
- (void)setLogData:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:;
- (void)setIsShowing:;
@end
