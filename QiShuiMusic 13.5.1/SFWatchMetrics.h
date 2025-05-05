@interface SFWatchMetrics : NSObject
@property (nonatomic) double minimumFontScaleFactor;
@property (nonatomic) double closeButtonTopToBaselineSpacing;
@property (nonatomic) double headerButtonFontPointSize;
@property (nonatomic) double headerButtonPadding;
- (id)init;
- (double)minimumFontScaleFactor;
- (double)closeButtonTopToBaselineSpacing;
- (double)headerButtonFontPointSize;
- (double)headerButtonPadding;
+ (id)currentMetrics;
@end
