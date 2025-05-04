@interface AWEShareAsStoryStyleFrameModel : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double originalWidth;
@property (nonatomic) double originalHeight;
@property (nonatomic) BOOL enableCornerRadius;
@property (nonatomic) double cornerRadiusValue;
- (void)setEnableCornerRadius:;
- (BOOL)enableCornerRadius;
- (double)cornerRadiusValue;
- (double)originalHeight;
- (double)x;
- (void)setHeight:;
- (void)setY:;
- (void)setWidth:;
- (double)originalWidth;
- (id)initWithRect:;
- (double)y;
- (void)setX:;
- (double)width;
- (double)height;
- (void)setOriginalHeight:;
- (void)setOriginalWidth:;
- (void)setCornerRadiusValue:;
+ (id)modelWithRect:;
@end
