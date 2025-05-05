@interface VideoContext : NSObject
@property (nonatomic) NSDictionary pixelAttrs;
@property (nonatomic) I pixelFormat;
@property (nonatomic) BOOL colorManagement;
@property (nonatomic) CIContext ciCtx;
@property (nonatomic) VideoWriter writer;
@property (nonatomic) I pixelFormatFlags;
- (void).cxx_destruct;
- (unsigned int)pixelFormat;
- (id)writer;
- (id)ciCtx;
- (id)initWithWriter:pixelFormatFlags:colorManagement:;
- (id)initWithWriter:pixelFormatFlags:;
- (id)createPixelBuffer:height:;
- (id)createPixelBuffer;
- (id)pixelBufferFromImage:withAttachFrom:;
- (id)pixelBufferFromImage:;
- (BOOL)pixelBuffer:conformsToImage:;
- (int)appendFrame:frameTime:srcPixBuf:;
- (unsigned int)pixelFormatFlags;
- (id)pixelAttrs;
- (BOOL)colorManagement;
- (void)setColorManagement:;
@end
