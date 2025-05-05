@interface IESECWinAuthorCommonConfig : NSObject
@property (nonatomic) UIColor quotationColor;
@property (nonatomic) UIColor wordColor;
@property (nonatomic) UIColor countColor;
@property (nonatomic) double displacementOffset;
- (id)countColor;
- (double)displacementOffset;
- (id)quotationColor;
- (void)setCountColor:;
- (void)setDisplacementOffset:;
- (void)setQuotationColor:;
- (void)setWordColor:;
- (id)wordColor;
- (void).cxx_destruct;
@end
