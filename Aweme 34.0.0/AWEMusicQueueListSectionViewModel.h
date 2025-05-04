@interface AWEMusicQueueListSectionViewModel : NSObject
@property (nonatomic) AWEMusicQueueListSectionHeaderModel headerViewModel;
@property (nonatomic) NSArray musicList;
- (id)musicList;
- (void)setMusicList:;
- (void)setHeaderViewModel:;
- (id)initWithMusicList:headerViewModel:;
- (void).cxx_destruct;
- (id)headerViewModel;
@end
