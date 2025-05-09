@interface AWETripHeaderBgComponentViewModel : DitoComponentViewModel
@property (nonatomic) NSString nodeTag;
@property (nonatomic) NSDictionary poiHeadRateFeed;
@property (nonatomic) NSDictionary albumBottomBarParams;
@property (nonatomic) NSDictionary bottomBarUpdateInfo;
@property (nonatomic) q tripHeadImageExpandOpt;
@property (nonatomic) q poiAggressiveStyleExp;
@property (nonatomic) NSMutableDictionary reportedMaps;
@property (nonatomic) NSNumber defaultOffset;
@property (nonatomic) AWEPOIOffset headImageStartOffset;
@property (nonatomic) BOOL showShareIcon;
@property (nonatomic) BOOL showTagLab;
@property (nonatomic) BOOL showMoreIconOnly;
@property (nonatomic) BOOL showMultiPager;
@property (nonatomic) NSArray photoPageTabList;
@property (nonatomic) NSString anchorTabPageSymbol;
@property (nonatomic) NSArray poiHeaderPhotos;
@property (nonatomic) NSArray tagList;
@property (nonatomic) NSArray nextIndexList;
@property (nonatomic) q picTotalCount;
@property (nonatomic) double originImageHeight;
@property (nonatomic) q showTripNativeHeadImage;
@property (nonatomic) BOOL headImageTagOpt;
@property (nonatomic) BOOL showAlbumText;
@property (nonatomic) AWETripHeaderBgComponentView componentView;
@property (nonatomic) BOOL isFullStyle;
- (double)originImageHeight;
- (id)tagList;
- (id)poiDetail;
- (void)bindStateAndAction;
- (id)componentSizeWithMaxWidth:;
- (void)didLoadPageModel:;
- (void)didHalfContainerOffsetChange:offset:;
- (void)fullContainerBeginPull:;
- (void)fullContainerUnfoldWillChange:isMaxUnfold:duration:;
- (void)fullContainerUnfoldDidChange:isMaxUnfold:;
- (void)vsdContainer:offsetChange:;
- (void)handleClickEvent:;
- (id)nodeTag;
- (void)setNodeTag:;
- (id)generalContext;
- (long long)picTotalCount;
- (BOOL)showMultiPager;
- (BOOL)showShareIcon;
- (BOOL)showMoreIconOnly;
- (id)photoPageTabList;
- (void)setShowShareIcon:;
- (void)setShowMoreIconOnly:;
- (id)anchorTabPageSymbol;
- (void)setAnchorTabPageSymbol:;
- (void)setPhotoPageTabList:;
- (void)setShowMultiPager:;
- (void)setIsFullStyle:;
- (void)buildBackgroundImageOffsetIfNeed;
- (id)headImageStartOffset;
- (void)setHeadImageStartOffset:;
- (void)pageWillEndShow;
- (void)trackBgImageSlide:;
- (void)trackBgImageClick:;
- (void)trackBgImageShow:;
- (BOOL)isFullStyle;
- (id)defaultOffset;
- (void)setDefaultOffset:;
- (id)reportedMaps;
- (BOOL)isReportedEvent:;
- (void)reportedEvent:;
- (BOOL)dataHasVideo;
- (void)pageDidShow;
- (void)setReportedMaps:;
- (long long)poiAggressiveStyleExp;
- (void)trackCheckInVideoShow;
- (BOOL)showAlbumText;
- (id)poiHeaderPhotos;
- (void)trackVolumeShow;
- (id)nextIndex:;
- (BOOL)headImageTagOpt;
- (long long)tripHeadImageExpandOpt;
- (long long)showTripNativeHeadImage;
- (void)openAlbumPageAtIndex:needAnchorTab:anchorTabPageSymbol:enterMethod:;
- (void)openHeaderPhotosAtIndex:;
- (void)trackSlideVideoProcessBar;
- (void)trackClickVolume:;
- (BOOL)firstVideo;
- (void)trackTagListClick:lastTabName:;
- (void)trackTagListSlide;
- (void)trackTagListArrowClick:lastTabName:;
- (void)trackTagListShow;
- (void)trackVideoCardClick;
- (void)subscribeBottomBarButtonInfo;
- (void)setBottomBarUpdateInfo:;
- (void)trackPullMax:;
- (id)generateArrayWithIndex:;
- (id)nextIndexList;
- (id)queryNextIndexWithIndex:indexArray:;
- (id)bottomBarUpdateInfo;
- (id)albumBottomBarParams;
- (BOOL)showTagLab;
- (BOOL)currentMediaIsVideo;
- (void)trackPOIOperationWithIsShow:extraParams:;
- (id)poiHeadRateFeed;
- (void)setPoiHeadRateFeed:;
- (void)setTripHeadImageExpandOpt:;
- (void)setPoiAggressiveStyleExp:;
- (void)setAlbumBottomBarParams:;
- (void)setShowTagLab:;
- (id)initWithNode:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)componentView;
- (void)setComponentView:;
@end
