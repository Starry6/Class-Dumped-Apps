@interface AWEPadLeftSideBarWatchHistoryContainerUIConfig : NSObject
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHorizontalMargin;
@property (nonatomic) double cellVerticalMargin;
@property (nonatomic) double collectionViewHorizontalMargin;
@property (nonatomic) double collectionViewVerticalMargin;
- (double)cellHorizontalMargin;
- (void)setCellHorizontalMargin:;
- (double)cellVerticalMargin;
- (void)setCellVerticalMargin:;
- (double)collectionViewHorizontalMargin;
- (void)setCollectionViewHorizontalMargin:;
- (double)collectionViewVerticalMargin;
- (void)setCollectionViewVerticalMargin:;
- (double)cellWidth;
- (double)cellHeight;
- (void)setCellHeight:;
- (void)setCellWidth:;
@end
