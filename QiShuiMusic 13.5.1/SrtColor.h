@interface SrtColor : NSObject
@property (nonatomic) double alpha;
@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
- (id)toDicSrtColor;
- (unsigned int)toUint32;
- (id)init;
- (double)red;
- (double)blue;
- (void)setRed:;
- (void)setAlpha:;
- (void)setGreen:;
- (void)setBlue:;
- (double)green;
- (double)alpha;
- (id)copyWithZone:;
+ (id)stickerSrtColorWithDic:;
+ (id)stickerSrtColorWithUint32:;
@end
