@interface AWEShareAsStoryStyleCombinedImageSizeModel : NSObject
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (double)height;
- (id)initWithWidth:height:;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithWidth:height:;
@end
