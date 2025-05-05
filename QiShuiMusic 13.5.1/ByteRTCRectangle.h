@interface ByteRTCRectangle : NSObject
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (void)setX:;
- (void)setY:;
- (int)y;
- (void)setWidth:;
- (int)x;
- (int)height;
- (int)width;
- (void)setHeight:;
@end
