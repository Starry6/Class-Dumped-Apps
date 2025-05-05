@interface BDARReportCell : BDARDislikeCellBase
@property (nonatomic) NSMutableArray reportButtons;
@property (nonatomic) <BDARReportCellDelegate> delegate;
- (void)buttonClick:;
- (id)reportButtons;
- (void)setReportButtons:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (long long)cellHeighWithModel:width:frames:;
@end
