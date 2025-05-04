@interface AWEPlaylistMoreActionSheetPresenter : NSObject
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) NSString playlistID;
@property (nonatomic) NSString ownerID;
@property (nonatomic) NSString playlistTitle;
@property (nonatomic) NSString referString;
@property (nonatomic) @? didTapReportBlock;
@property (nonatomic) @? didLoginBlock;
- (id)referString;
- (void)setReferString:;
- (void)setPlaylistID:;
- (void)showActionSheetOn:didTapReportBlock:didLoginBlock:;
- (id)initWithPlaylistID:title:ownerID:referString:;
- (void)didTapReport;
- (void)setDidTapReportBlock:;
- (void)setDidLoginBlock:;
- (id)didLoginBlock;
- (id)didTapReportBlock;
- (void).cxx_destruct;
- (id)playlistTitle;
- (void)setPlaylistTitle:;
- (id)ownerID;
- (id)playlistID;
- (void)setOwnerID:;
- (id)sheet;
- (void)setSheet:;
@end
