@interface AWERVNewDetailHeadCardSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWERVNewDetailPlayVideoViewController videoViewController;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)configVideoViewController:logExtraDict:playControlModel:;
- (void).cxx_destruct;
- (void)setVideoViewController:;
- (id)videoViewController;
@end
