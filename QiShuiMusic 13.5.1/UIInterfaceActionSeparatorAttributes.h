@interface UIInterfaceActionSeparatorAttributes : NSObject
@property (nonatomic) NSArray filters;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double opacity;
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
- (BOOL)_hasNonClearBackgroundColor;
- (id)newSeparatorView;
@end
