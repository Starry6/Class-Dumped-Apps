@interface AWELVAlbumFavoriteButton : AWECollectionButton
@property (nonatomic) q buttonStyleType;
@property (nonatomic) DUXPopover favoritePopover;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) AWELVideoAlbumInfoModel albumInfo;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) @? exitLandscapeCompletionBlock;
@property (nonatomic) @? clickGotoPersonDetailBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)albumInfo;
- (void)setAlbumInfo:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)favoritePopover;
- (void)setFavoritePopover:;
- (void)updateWithAlbumInfo:currentAwemeModel:;
- (id)exitLandscapeCompletionBlock;
- (void)setExitLandscapeCompletionBlock:;
- (void)setClickGotoPersonDetailBlock:;
- (long long)buttonStyleType;
- (void)setupButtonForLandscape;
- (void)setupButtonForFeed;
- (void)didClickFavoriteButton:;
- (void)collectionStatusChanged:;
- (void)showFavoriteSuccessTips;
- (void)showCancelFavoriteSuccessTips;
- (id)clickGotoPersonDetailBlock;
- (void)trackCollectStatus:;
- (void)requestFavoriteAlbum:completionBlock:;
- (id)initWithFavoriteButtonStyleType:;
- (void)jumpToFavorite;
- (void)setButtonStyleType:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (void)setupUI;
@end
