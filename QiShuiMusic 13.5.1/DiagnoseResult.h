@interface DiagnoseResult : NSObject
@property (nonatomic) NSInteger maxValue;
@property (nonatomic) NSInteger avgValue;
@property (nonatomic) NSInteger overCount;
- (int)overCount;
- (void)setAvgValue:;
- (void)setOverCount:;
- (int)maxValue;
- (id)description;
- (void)setMaxValue:;
- (int)avgValue;
@end
