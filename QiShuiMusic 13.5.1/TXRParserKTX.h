@interface TXRParserKTX : NSObject
@property (nonatomic) TXRTextureInfo textureInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textureInfo;
- (void).cxx_destruct;
- (id)parsedImageAtLevel:element:face:;
- (BOOL)parseData:bufferAllocator:options:error:;
- (void)parseImageData:WithOptions:bufferAllocator:;
- (unsigned long long)determineFormatFromType:format:internalFormat:baseInternalFormat:;
+ (BOOL)handlesData:;
+ (BOOL)exportTexture:url:error:;
@end
