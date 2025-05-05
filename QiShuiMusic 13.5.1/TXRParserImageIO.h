@interface TXRParserImageIO : NSObject
@property (nonatomic) TXRTextureInfo textureInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textureInfo;
- (void).cxx_destruct;
- (id)parsedImageAtLevel:element:face:;
- (BOOL)parseData:bufferAllocator:options:error:;
+ (BOOL)handlesData:;
+ (int)determineColorSpaceClass:displayGamut:options:;
+ (id)decodeCGImage:desiredPixelFormat:bufferAllocator:options:error:;
+ (id)decodeCGImageNonIndexed:desiredPixelFormat:bufferAllocator:options:error:;
+ (BOOL)exportTexture:url:error:;
+ (BOOL)exportImage:url:uttype:colorSpace:orientation:error:;
+ (id)newCGImageFromImage:colorSpace:error:;
@end
