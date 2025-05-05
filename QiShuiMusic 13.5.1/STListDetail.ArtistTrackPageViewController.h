@interface STListDetail.ArtistTrackPageViewController : STListDetail.BNNormalAllSongsViewController
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etGroupType;
- (id)etGroupType;
- (id)etPageName;
- (id)etSceneName;
- (id)initWithCoder:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
