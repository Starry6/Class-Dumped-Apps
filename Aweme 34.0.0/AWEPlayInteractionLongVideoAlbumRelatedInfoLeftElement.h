@interface AWEPlayInteractionLongVideoAlbumRelatedInfoLeftElement : AWEPlayInteractionLeftElement
@property (nonatomic) UILabel infoLabel;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)buildInfoLabelText:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)infoLabel;
- (void)setInfoLabel:;
- (id)infoLabelFont;
+ (BOOL)shouldActiveWithModel:context:;
+ (id)dateFormatterForFull;
+ (id)formattedDateForReleaseTime:;
@end
