@interface MetalTextureManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)genTextureFromPixel:withFormat:;
- (BOOL)copyTexture:dst:;
- (int)genTextureFromPixel:;
- (id)getPixelTextureFromImage:;
- (id)getPixelTextureWithWidth:height:pixFmt:needGenTexture:;
- (id)getTextureWithWidth:height:pixelFormat:;
- (void)returnPixelTexture:;
- (id)init;
- (void)dealloc;
- (void)clearAll;
- (void).cxx_destruct;
+ (id)getInstance;
@end
