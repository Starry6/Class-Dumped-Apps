@interface AWEMusicPlaylistSectionViewModel : NSObject
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) BOOL showCreateBtn;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) NSArray cellViewModelArray;
- (id)cellViewModelArray;
- (BOOL)showCreateBtn;
- (void)setShowCreateBtn:;
- (void)setCellViewModelArray:;
- (double)sectionHeaderHeight;
- (void).cxx_destruct;
- (void)setSectionHeaderHeight:;
- (id)sectionTitle;
- (void)setSectionTitle:;
@end
