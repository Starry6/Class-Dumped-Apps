@interface IESLiveInteractAnimationNodeTable : NSObject
@property (nonatomic) NSMutableDictionary nodeTable;
- (void)insert:forUser:;
- (void)remove:forUser:;
- (void)didSetAttachingDIContext;
- (void)enumerated:forUser:;
- (id)nodeTable;
- (void)removeAllNodeFromParentNode;
- (void)setNodeTable:;
- (void).cxx_destruct;
- (BOOL)contains:;
@end
