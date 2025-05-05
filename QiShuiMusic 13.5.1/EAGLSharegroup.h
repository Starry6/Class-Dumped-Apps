@interface EAGLSharegroup : NSObject
@property (nonatomic) NSString debugLabel;
- (void)setDebugLabel:;
- (id)debugLabel;
- (id)init;
- (void)dealloc;
- (id)initWithAPI:;
- (id)initWithAPI:sharedWithCompute:;
- (void)loadGLIPlugin:sharedWithCompute:;
- (unsigned long long)APIs;
- (id)getGLIShared;
@end
