@interface AWETransformerLayoutGridAttributes : NSObject
@property (nonatomic) NSString gridTemplateColumns;
@property (nonatomic) NSString gridTemplateRows;
@property (nonatomic) NSString gridColumnGap;
@property (nonatomic) NSString gridRowGap;
@property (nonatomic) Q maxShowNum;
@property (nonatomic) double maxShowItemVisibleSpace;
- (unsigned long long)maxShowNum;
- (void)setMaxShowNum:;
- (id)gridRowGap;
- (void)setGridRowGap:;
- (id)gridColumnGap;
- (void)setGridColumnGap:;
- (id)gridTemplateRows;
- (void)setGridTemplateRows:;
- (id)gridTemplateColumns;
- (void)setGridTemplateColumns:;
- (double)maxShowItemVisibleSpace;
- (void)setMaxShowItemVisibleSpace:;
- (void).cxx_destruct;
@end
