@interface SCNMTLResourceBinding : NSObject
@property (nonatomic) MTLArgument argument;
@property (nonatomic) <MTLArgumentEncoder> argumentEncoder;
@property (nonatomic) Q type;
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray usedResources;
@property (nonatomic) BOOL needsRenderResource;
@property (nonatomic) @ bindBlock;
- (id)init;
- (void)dealloc;
- (unsigned long long)type;
- (id)bindBlock;
- (id)description;
- (void)setBindBlock:;
- (id)name;
- (id)argument;
- (void)setNeedsRenderResource:;
- (BOOL)needsRenderResource;
- (id)usedResources;
- (void)setArgument:;
- (id)argumentEncoder;
- (void)setArgumentEncoder:;
@end
