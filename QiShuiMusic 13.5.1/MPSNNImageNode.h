@interface MPSNNImageNode : NSObject
@property (nonatomic) <MPSHandle> handle;
@property (nonatomic) Q format;
@property (nonatomic) <MPSImageAllocator> imageAllocator;
@property (nonatomic) BOOL exportFromGraph;
@property (nonatomic) BOOL synchronizeResource;
@property (nonatomic) BOOL stopGradient;
- (void)setFormat:;
- (id)debugQuickLookObject;
- (id)initWithHandle:;
- (void)dealloc;
- (unsigned long long)format;
- (id)handle;
- (void)setHandle:;
- (id)debugDescription;
- (id)initWithParent:;
- (BOOL)stopGradient;
- (void)setStopGradient:;
- (void)setImageAllocator:;
- (void)setSynchronizeResource:;
- (void)setExportFromGraph:;
- (id)imageAllocator;
- (BOOL)exportFromGraph;
- (BOOL)synchronizeResource;
+ (id)nodeWithHandle:;
+ (id)exportedNodeWithHandle:;
@end
