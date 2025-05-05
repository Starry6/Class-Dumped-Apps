@interface VKBarcodeFrameProcessorConfiguration : NSObject
@property (nonatomic) BOOL isForSingleItem;
@property (nonatomic) {CGPoint=dd} comparisonPoint;
@property (nonatomic) NSArray symbologies;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)symbologies;
- (void)setSymbologies:;
- (void)setComparisonPoint:;
- (id)comparisonPoint;
- (BOOL)isForSingleItem;
- (void)setIsForSingleItem:;
- (BOOL)isEqualToBarcodeFrameProcessorConfiguration:;
@end
