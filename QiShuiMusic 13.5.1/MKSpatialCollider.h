@interface MKSpatialCollider : NSObject
- (void)dealloc;
- (unsigned long long)viewCount;
- (id)viewsCollidingWithAnnotationView:inCollidableList:;
- (unsigned long long)insertAnnotationView:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)annotationViewAtIndex:;
- (id)viewsCollidingWithAnnotationViewAtIndex:;
- (id)viewsCollidingWithAnnotationView:inCollidableList:fromIndex:length:;
- (id)registeredCollissions;
- (void).cxx_destruct;
- (id)initWithAnnotationViews:previousCollissions:options:;
- (id).cxx_construct;
@end
