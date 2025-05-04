@interface AWEHotSpotPublishEntranceBaseView : UIView
@property (nonatomic) @? shotEntryClickedBlock;
@property (nonatomic) @? discussEntryClickedBlock;
@property (nonatomic) @? albumEntryClickedBlock;
@property (nonatomic) AWESearchHotSpotConfigModel model;
- (void)setShotEntryClickedBlock:;
- (void)setDiscussEntryClickedBlock:;
- (id)shotEntryClickedBlock;
- (id)discussEntryClickedBlock;
- (id)albumEntryClickedBlock;
- (void)setAlbumEntryClickedBlock:;
- (id)bottomBarRealSize;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
+ (id)createConcreteEntryView:;
@end
