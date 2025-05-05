@interface ARCoachingSessionCache : NSObject
- (id)init;
- (void)clear;
- (void)sessionChanged;
- (void)anchorsAdded:;
- (void)anchorsRemoved:;
- (BOOL)hasAnyPlane:;
- (BOOL)hasHorizontalPlane:;
- (BOOL)hasVerticalPlane:;
- (void)initializePlaneCache:;
- (void)updatePlaneCache:;
- (void)removeFromPlaneCache:;
@end
