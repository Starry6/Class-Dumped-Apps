@interface UIMenuSystem : NSObject
- (void).cxx_destruct;
- (void)setNeedsRebuild;
- (id)initWithRootMenuChildren:;
- (BOOL)_buildMenuWithBuilder:fromResponderChain:atLocation:inCoordinateSpace:;
- (void)_setInitialBuildingResponder:;
- (id)_newBuilderFromResponderChain:atLocation:inCoordinateSpace:;
- (void)setNeedsRevalidate;
+ (id)mainSystem;
+ (id)contextSystem;
@end
