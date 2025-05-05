@interface CLAutoCohortUtilities : NSObject
+ (void)createDirectoryAtPath:;
+ (BOOL)autoCohortingEnabled;
+ (id)getEdgeFilesFromDirectory:;
+ (id)computeAutoCohortMapWithStarterGraph:;
+ (void)writeEdge:toDirectory:;
+ (void)applyEdges:toGraph:;
+ (BOOL)isEdgeKnownToCauseCycle:;
+ (void)markUnvetted:;
+ (void)markUnvettedSafe;
+ (id)getSafeEdges;
+ (void)persistEdgeFrom:to:;
+ (void)markUnvettedUnsafe;
+ (id)getUnsafeEdges;
+ (void)enableAutoCohortingForProcessAtPath:;
+ (id)getUnvettedEdges;
+ (id)layerAssignmentForNode:inGraph:extendingLayering:;
+ (id)readEdges:;
@end
