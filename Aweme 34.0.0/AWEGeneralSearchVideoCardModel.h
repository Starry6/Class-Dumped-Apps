@interface AWEGeneralSearchVideoCardModel : NSObject
@property (nonatomic) AWEGeneralSearchModel businessModel;
@property (nonatomic) double containerWidth;
@property (nonatomic) <AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;
@property (nonatomic) <AWEFeedVideoSingleCardLayoutAdjusterProtocol> singleCardLayoutAdjuster;
@property (nonatomic) BOOL isXiGuaVideoCard;
@property (nonatomic) NSString cellIsRed;
@property (nonatomic) q sectionIndex;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) AWESearchUGCPageContext ugcPageContext;
@property (nonatomic) @ bindedData;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL isSearchStyle;
@property (nonatomic) NSString adEventName;
@property (nonatomic) BOOL isTrendingStyle;
@property (nonatomic) Q displayType;
@property (nonatomic) Q browsedType;
@property (nonatomic) AWEModernFeedAuthorInfoFrame authorInfoFrame;
@property (nonatomic) AWEModernFeedActionPanelFrame actionPanelFrame;
@property (nonatomic) AWEModernFeedContentFrame contentDescFrame;
@property (nonatomic) AWEModernFeedContentFrame abstractFrame;
@property (nonatomic) AWEModernFeedBaseContainerFrame baseContainerFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} goodsLynxViewFrame;
@property (nonatomic) {CGSize=dd} privacySize;
@property (nonatomic) Q videoContainerViewLayout;
@property (nonatomic) BOOL isShowNativeFooterView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoFooterLynxViewFrame;
@property (nonatomic) AWEModernFeedTagFrame tagFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoSectionFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} musicInfoBottomViewFrame;
@property (nonatomic) BOOL shouldShowMusicInfoBottomView;
@property (nonatomic) q cutType;
@property (nonatomic) NSDictionary searchLogPassback;
@property (nonatomic) NSString searchType;
@property (nonatomic) BOOL shouldShowPrivacyTag;
@property (nonatomic) BOOL isAdaptedForBrowsed;
@property (nonatomic) NSString displayPrivacyStr;
@property (nonatomic) double adjustedContainerWidth;
@property (nonatomic) BOOL isVideoContinuePlayPopover;
@property (nonatomic) BOOL shouldGraduateLoad;
@property (nonatomic) AWESearchComponentTransformModel componentTransformModel;
@property (nonatomic) AWESearchWeakAnchorComponentModel weakAnchorComponentModel;
@property (nonatomic) AWESearchStrongAnchorComponentModel strongAnchorComponentModel;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (id)adEventName;
- (void)setAdEventName:;
- (void)setBusinessModel:;
- (id)businessModel;
- (id)searchLogPassback;
- (void)setSearchLogPassback:;
- (id)authorInfoFrame;
- (id)actionPanelFrame;
- (void)setActionPanelFrame:;
- (id)bindedData;
- (id)cellIsRed;
- (id)contentDescFrame;
- (BOOL)isXiGuaVideoCard;
- (void)setCutType:;
- (id)tagFrame;
- (unsigned long long)videoContainerViewLayout;
- (long long)cutType;
- (void)setVideoSectionFrame:;
- (id)videoSectionFrame;
- (void)setVideoFooterLynxViewFrame:;
- (id)videoFooterLynxViewFrame;
- (void)setTagFrame:;
- (BOOL)shouldShowMusicInfoBottomView;
- (void)setMusicInfoBottomViewFrame:;
- (id)musicInfoBottomViewFrame;
- (void)setGoodsLynxViewFrame:;
- (id)goodsLynxViewFrame;
- (void)setBrowsedType:;
- (void)setBindedData:;
- (unsigned long long)browsedType;
- (id)weakAnchorComponentModel;
- (id)strongAnchorComponentModel;
- (id)ugcPageContext;
- (BOOL)isTrendingStyle;
- (id)abstractFrame;
- (id)baseContainerFrame;
- (id)privacySize;
- (BOOL)isShowNativeFooterView;
- (BOOL)isSearchStyle;
- (BOOL)shouldShowPrivacyTag;
- (id)displayPrivacyStr;
- (void)setShouldGraduateLoad:;
- (void)setUgcPageContext:;
- (void)setComponentTransformModel:;
- (void)setWeakAnchorComponentModel:;
- (void)setStrongAnchorComponentModel:;
- (void)setQualityLayoutAdjuster:;
- (void)setSingleCardLayoutAdjuster:;
- (void)setIsXiGuaVideoCard:;
- (void)setCellIsRed:;
- (void)setIsTrendingStyle:;
- (void)setVideoContainerViewLayout:;
- (void)setAuthorInfoFrame:;
- (void)setContentDescFrame:;
- (void)setAbstractFrame:;
- (void)setBaseContainerFrame:;
- (void)setPrivacySize:;
- (void)setIsShowNativeFooterView:;
- (void)setShouldShowMusicInfoBottomView:;
- (void)setIsSearchStyle:;
- (void)setShouldShowPrivacyTag:;
- (void)setIsAdaptedForBrowsed:;
- (void)setDisplayPrivacyStr:;
- (void)setAdjustedContainerWidth:;
- (id)componentTransformModel;
- (id)qualityLayoutAdjuster;
- (id)singleCardLayoutAdjuster;
- (BOOL)isAdaptedForBrowsed;
- (double)adjustedContainerWidth;
- (BOOL)isVideoContinuePlayPopover;
- (void)setIsVideoContinuePlayPopover:;
- (BOOL)shouldGraduateLoad;
- (id)searchType;
- (void)setSearchType:;
- (unsigned long long)displayType;
- (void)setDisplayType:;
- (void).cxx_destruct;
- (long long)sectionIndex;
- (void)setSectionIndex:;
- (double)containerWidth;
- (void)setContainerWidth:;
@end
