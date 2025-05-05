@interface IESSticker : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) double rotate;
@property (nonatomic) float opaque;
@property (nonatomic) UIImage image;
- (id)stickerToDicWithImageHomePath:;
- (id)init;
- (void)setFrame:;
- (id)key;
- (void)setImage:;
- (float)opaque;
- (id)frame;
- (void)setKey:;
- (void).cxx_destruct;
- (void)setOpaque:;
- (id)image;
- (id)copyWithZone:;
- (double)rotate;
- (void)setRotate:;
+ (id)stickerWithDic:imageHomePath:;
+ (id)stickerWithImage:frame:rotate:opaque:;
@end
