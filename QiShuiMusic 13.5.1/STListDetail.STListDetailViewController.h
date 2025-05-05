@interface STListDetail.STListDetailViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) _TtC18STAccountInterface17BNListDetailParam param;
@property (nonatomic) _TtC15BNCommonAdapter11BNEmptyInfo currentInfo;
@property (nonatomic) _TtC15BNCommonAdapter14BNPlaylistInfo playlistInfo;
@property (nonatomic) _TtC15BNCommonAdapter16AlbumRouterParam albumInfo;
- (id)etGroupID;
- (id)etGroupType;
- (id)etPageName;
- (id)etSceneName;
- (void)switchChangedWithMySwitch:;
- (void)setCurrentInfo:;
- (id)albumInfo;
- (id)playlistInfo;
- (void)setAlbumInfo:;
- (void)setPlaylistInfo:;
- (void)dealloc;
- (id)initWithCoder:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (id)currentInfo;
@end
