@interface AWEProgressUIColorConfig : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) NSString colorName;
@property (nonatomic) NSString colorStr;
- (id)color;
- (void)setColor:;
- (id)colorName;
- (void).cxx_destruct;
- (void)setColorName:;
- (id)colorStr;
- (void)setColorStr:;
+ (id)colorConfigWith:colorName:colorString:;
@end
