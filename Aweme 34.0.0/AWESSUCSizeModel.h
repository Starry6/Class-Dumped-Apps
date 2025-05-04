@interface AWESSUCSizeModel : AWEBaseApiModel
@property (nonatomic) double width;
@property (nonatomic) double height;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (double)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
