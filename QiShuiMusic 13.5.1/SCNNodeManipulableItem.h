@interface SCNNodeManipulableItem : SCNManipulableItem
- (void)setPosition:;
- (void)setTransform:;
- (id)transform;
- (id)scale;
- (id)parentItem;
- (id)worldTransform;
- (void)setWorldTransform:;
- (BOOL)isNodeManipulator;
- (id)cloneForManipulators;
- (void)validateClone;
+ (void)addItems:toScene:;
+ (void)removeItemsFromScene:;
+ (id)nodeManipulatorItemWithNode:screenSize:;
@end
