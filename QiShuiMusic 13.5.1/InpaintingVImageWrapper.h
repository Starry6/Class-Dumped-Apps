@interface InpaintingVImageWrapper : NSObject
@property (nonatomic) ^{vImage_Buffer=^vQQQ} image;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger bytesPerPixel;
@property (nonatomic) NSInteger bytesPerRow;
@property (nonatomic) ^v data;
- (void)dealloc;
- (void)free;
- (int)getBytesPerRow;
- (id)getData;
- (id)image;
- (id)initWithWidth:height:bpp:bpr:bytes:freeBytesWhenDone:;
- (id)initWithWidth:height:bpp:bytes:freeBytesWhenDone:;
- (id)initWithWidth:height:bpp:;
- (id)initWithShapeOf:;
- (int)getWidth;
- (int)getHeight;
- (int)getBytesPerPixel;
+ (id)vImageWrapperByCroppingWrapper:toRect:;
+ (id)createVImageWrapperForProcessorInput:thatMatchesOutput:;
@end
