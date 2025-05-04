@interface AWEFeedDoubleColumnAdCellActionInfoElement : AWEDCFeedBaseCellElement
- (void)configWithModel:context:;
- (id)init;
- (id)initWithContext:;
- (void).cxx_destruct;
+ (BOOL)canShowWithAwemeModel:context:;
+ (double)heightWithCellWidth:awemeModel:context:;
+ (double)lastBottomMargin;
+ (double)bottomMargin;
@end
