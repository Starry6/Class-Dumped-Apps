@interface YYTextDecoration : NSObject
@property (nonatomic) q style;
@property (nonatomic) NSNumber width;
@property (nonatomic) UIColor color;
@property (nonatomic) YYTextShadow shadow;
- (id)init;
- (void)setColor:;
- (void)setStyle:;
- (void)setWidth:;
- (id)initWithCoder:;
- (id)shadow;
- (id)color;
- (void)encodeWithCoder:;
- (id)width;
- (void).cxx_destruct;
- (long long)style;
- (id)copyWithZone:;
- (void)setShadow:;
+ (id)decorationWithStyle:;
+ (id)decorationWithStyle:width:color:;
@end
