@interface PTSizeSettings : PTSettings
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) {CGSize=dd} sizeValue;
- (id)drillDownSummary;
- (void)setWidth:;
- (double)height;
- (double)width;
- (void)setHeight:;
- (id)sizeValue;
- (void)setSizeValue:;
+ (BOOL)ignoresKey:;
+ (id)settingsControllerModule;
@end
