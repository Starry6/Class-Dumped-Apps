@interface AWEOpenShareBaseSticker : NSObject
@property (nonatomic) NSNumber locationX;
@property (nonatomic) NSNumber locationY;
@property (nonatomic) NSNumber normalizedSizeX;
@property (nonatomic) NSNumber normalizedSizeY;
@property (nonatomic) NSNumber rotate;
@property (nonatomic) NSNumber scale;
- (id)locationX;
- (id)locationY;
- (void)setLocationX:;
- (void)setLocationY:;
- (id)normalizedSizeX;
- (void)setNormalizedSizeX:;
- (id)normalizedSizeY;
- (void)setNormalizedSizeY:;
- (id)scale;
- (void).cxx_destruct;
- (void)setScale:;
- (id)rotate;
- (void)setRotate:;
@end
