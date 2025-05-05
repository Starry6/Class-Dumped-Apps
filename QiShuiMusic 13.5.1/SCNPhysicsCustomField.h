@interface SCNPhysicsCustomField : SCNPhysicsField
@property (nonatomic) @? block;
- (id)block;
- (void)dealloc;
- (void)setBlock:;
- (id)_createField;
@end
