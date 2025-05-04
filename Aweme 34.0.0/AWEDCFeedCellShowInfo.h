@interface AWEDCFeedCellShowInfo : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) double showTime;
@property (nonatomic) double visiblePercent;
- (id)awemeModel;
- (void)setAwemeModel:;
- (double)showTime;
- (void)setShowTime:;
- (id)initWithShowTime:awemeModel:;
- (id)initWithVisiblePercent:awemeModel:;
- (double)visiblePercent;
- (void)setVisiblePercent:;
- (void).cxx_destruct;
@end
