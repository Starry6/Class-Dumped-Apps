@interface BDXCategoryIndicatorViewBorderConfig : NSObject
@property (nonatomic) Q borderType;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double margin;
@property (nonatomic) UIColor color;
- (id)init;
- (void)setColor:;
- (double)margin;
- (void)setWidth:;
- (void)setMargin:;
- (BOOL)hidden;
- (double)height;
- (id)color;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setHidden:;
- (unsigned long long)borderType;
- (void)setBorderType:;
@end
