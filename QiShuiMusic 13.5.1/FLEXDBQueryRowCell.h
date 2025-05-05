@interface FLEXDBQueryRowCell : UITableViewCell
@property (nonatomic) q columnCount;
@property (nonatomic) NSArray labels;
@property (nonatomic) NSArray data;
@property (nonatomic) <FLEXDBQueryRowCellLayoutSource> layoutSource;
- (void)setData:;
- (void)setColumnCount:;
- (void)layoutSubviews;
- (id)data;
- (id)layoutSource;
- (void)setLayoutSource:;
- (long long)columnCount;
- (id)labels;
- (void)setLabels:;
- (void).cxx_destruct;
@end
