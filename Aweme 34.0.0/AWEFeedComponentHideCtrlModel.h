@interface AWEFeedComponentHideCtrlModel : AWEBaseApiModel
@property (nonatomic) BOOL hideAnchor;
@property (nonatomic) BOOL hideMixBar;
@property (nonatomic) BOOL hidePlaylistBar;
@property (nonatomic) BOOL hideHotspotBar;
@property (nonatomic) BOOL hideRelatedToutiaoBar;
@property (nonatomic) BOOL hideRelatedXiguaBar;
@property (nonatomic) BOOL hideVSFormatBar;
@property (nonatomic) BOOL hideRelatedSearchBar;
@property (nonatomic) BOOL hideRelatedRecommendBar;
@property (nonatomic) NSArray hideBtnList;
@property (nonatomic) NSArray showBtnList;
@property (nonatomic) BOOL useCommonAnchor;
- (BOOL)useCommonAnchor;
- (BOOL)hidePlaylistBar;
- (BOOL)shouldHideMixBar;
- (BOOL)hideMixBar;
- (BOOL)hideAnchor;
- (void)setHideAnchor:;
- (void)setHideMixBar:;
- (void)setHidePlaylistBar:;
- (BOOL)hideHotspotBar;
- (void)setHideHotspotBar:;
- (BOOL)hideRelatedToutiaoBar;
- (void)setHideRelatedToutiaoBar:;
- (BOOL)hideRelatedXiguaBar;
- (void)setHideRelatedXiguaBar:;
- (BOOL)hideVSFormatBar;
- (void)setHideVSFormatBar:;
- (BOOL)hideRelatedSearchBar;
- (void)setHideRelatedSearchBar:;
- (BOOL)hideRelatedRecommendBar;
- (void)setHideRelatedRecommendBar:;
- (id)hideBtnList;
- (void)setHideBtnList:;
- (id)showBtnList;
- (void)setShowBtnList:;
- (void)setUseCommonAnchor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
