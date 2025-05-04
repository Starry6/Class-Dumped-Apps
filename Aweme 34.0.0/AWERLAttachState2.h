@interface AWERLAttachState2 : NSObject
@property (nonatomic) NSMutableSet mountedVV;
@property (nonatomic) AWERLVirtualView rootVV;
- (id)initWithRootVirtualView:;
- (id)mountedVV;
- (void)setMountedVV:;
- (id)rootVV;
- (void)setRootVV:;
- (void).cxx_destruct;
@end
