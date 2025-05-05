@interface SCNMaterialAttachment : NSObject
@property (nonatomic) I glID;
@property (nonatomic) I target;
@property (nonatomic) ^v context;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)dealloc;
- (id)context;
- (void)setTarget:;
- (id)options;
- (unsigned int)target;
- (void)setContext:;
- (void)setSize:;
- (id)size;
- (unsigned int)glID;
- (void)setGlID:;
+ (id)materialAttachmentWithGLKTextureInfo:;
@end
