@interface AWEPixelBufferTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)imageFromCVPixelBufferRefForTTPlayer:;
+ (void)convertBGRAtoRGBA:withSize:;
@end
