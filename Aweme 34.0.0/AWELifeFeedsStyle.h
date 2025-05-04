@interface AWELifeFeedsStyle : NSObject
@property (nonatomic) q numberOfColumns;
@property (nonatomic) {UIEdgeInsets=dddd} margin;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double presetHeight;
@property (nonatomic) BOOL isBlock;
- (void)setPresetHeight:;
- (double)presetHeight;
- (void)setIsBlock:;
- (void)parseMargin:;
- (id)initWithSourceData:;
- (void)parseBackgroundColor:;
- (id)margin;
- (void)setMargin:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (long long)numberOfColumns;
- (void)setNumberOfColumns:;
- (BOOL)isBlock;
@end
