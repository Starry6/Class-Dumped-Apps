@interface AWEMusicDetailFeedListUIConfig : NSObject
@property (nonatomic) q numberOfCellPerRow;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) {CGSize=dd} lastCellSize;
- (id)lastCellSize;
- (void)setLastCellSize:;
- (long long)numberOfCellPerRow;
- (void)setNumberOfCellPerRow:;
- (id)cellSize;
- (void)setCellSize:;
@end
