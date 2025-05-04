@interface AWERLVirtualViewTreeSnapshotNode : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) AWERLVirtualView virtualView;
@property (nonatomic) NSMutableArray subNodes;
- (void)setVirtualView:;
- (id)initWithVirtualView:;
- (id)subNodes;
- (void)setSubNodes:;
- (unsigned long long)hash;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)virtualView;
@end
