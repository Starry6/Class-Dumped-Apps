@interface CMIBareMetalTexture : NSObject
@property (nonatomic) <MTLTexture> texture;
- (id)texture;
- (void).cxx_destruct;
- (BOOL)saveToFile:;
- (id)initWithTexture:;
- (id)initWithFile:device:;
- (id)initWithData:device:;
- (BOOL)updateTextureWithFile:;
- (BOOL)updateTextureWithData:;
- (int)updateTextureDescriptor:;
- (int)updateTextureContent:;
- (BOOL)saveToFile:withBMTLversion:;
@end
