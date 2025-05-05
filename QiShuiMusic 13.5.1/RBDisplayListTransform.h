@interface RBDisplayListTransform : NSObject
- (void)removeAll;
- (void)addEraserClip;
- (void)addColorReplacementTo:colorSpace:;
- (id)applyingToDisplayList:;
- (void)addColorReplacementFrom:to:colorSpace:;
- (void).cxx_destruct;
- (void)applyToDisplayList:;
- (id).cxx_construct;
- (id)copyWithZone:;
+ (id)transform;
@end
