@interface IESECGoodsFeedItemCardCellConfiguration : NSObject
@property (nonatomic) Q style;
@property (nonatomic) double edgePadding;
@property (nonatomic) double maximumNumberOfLinesForTitle;
@property (nonatomic) BOOL mergeSalesToGuaranteedArea;
@property (nonatomic) BOOL hideOperationArea;
@property (nonatomic) BOOL replaceDiscountWithPositiveRate;
- (BOOL)replaceDiscountWithPositiveRate;
- (BOOL)hideOperationArea;
- (double)maximumNumberOfLinesForTitle;
- (BOOL)mergeSalesToGuaranteedArea;
- (void)setHideOperationArea:;
- (void)setMaximumNumberOfLinesForTitle:;
- (void)setMergeSalesToGuaranteedArea:;
- (void)setReplaceDiscountWithPositiveRate:;
- (void)setStyle:;
- (unsigned long long)style;
- (double)edgePadding;
- (void)setEdgePadding:;
@end
