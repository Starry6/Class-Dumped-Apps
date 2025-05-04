@interface AWEDCFeedCellElementViewLayoutInfo : NSObject
@property (nonatomic) double horizontalMargin;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double verticalTopMargin;
@property (nonatomic) double width;
- (void)setVerticalTopMargin:;
- (id)initWithHorizontalMargin:verticalMargin:;
- (double)verticalTopMargin;
- (id)init;
- (double)verticalMargin;
- (void)setWidth:;
- (void)setVerticalMargin:;
- (double)width;
- (double)horizontalMargin;
- (void)setHorizontalMargin:;
@end
