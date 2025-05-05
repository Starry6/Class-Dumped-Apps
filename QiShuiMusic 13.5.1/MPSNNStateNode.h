@interface MPSNNStateNode : NSObject
@property (nonatomic) <MPSHandle> handle;
@property (nonatomic) BOOL exportFromGraph;
@property (nonatomic) BOOL synchronizeResource;
- (id)debugQuickLookObject;
- (void)dealloc;
- (id)handle;
- (void)setHandle:;
- (id)debugDescription;
- (id)initWithParent:;
- (void)setSynchronizeResource:;
- (void)setExportFromGraph:;
- (BOOL)exportFromGraph;
- (BOOL)synchronizeResource;
@end
