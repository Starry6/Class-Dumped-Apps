@interface UIInterfaceActionHighlightAttributes : NSObject
@property (nonatomic) double opacity;
@property (nonatomic) NSArray filters;
@property (nonatomic) UIColor backgroundColor;
- (id)filters;
- (void)setOpacity:;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (double)opacity;
- (void)setFilters:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)newBackgroundHighlightView;
- (BOOL)_hasNonClearBackgroundColor;
@end
