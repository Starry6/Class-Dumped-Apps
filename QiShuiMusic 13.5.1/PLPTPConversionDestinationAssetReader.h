@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader
@property (nonatomic) PHMediaFormatConversionDestination destination;
- (id)path;
- (void)setDestination:;
- (id)initWithDestination:;
- (id)destination;
- (void).cxx_destruct;
- (id)dataSourcePathForDataRange:error:;
@end
