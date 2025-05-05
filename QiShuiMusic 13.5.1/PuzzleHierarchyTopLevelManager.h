@interface PuzzleHierarchyTopLevelManager : NSObject
- (void)_cleanNilObjects;
- (id)_lastContainer;
- (void)forceUseTopLevelForViewController:topLevel:;
- (BOOL)isForceDisableTopLevel;
- (BOOL)isForceUseTopLevel;
- (BOOL)isNonContainerForceUseTopLevel;
- (void)setTopLovel:value:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
