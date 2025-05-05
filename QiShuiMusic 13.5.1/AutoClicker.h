@interface AutoClicker : NSObject
+ (void)saveMarkerState;
+ (void)toggleMarker;
+ (void)updateMarkerPositionForTouch:;
+ (void)setupMarkerForTouch:;
+ (void)removeMarkerForTouch:;
+ (void)removeAllMarkers;
+ (void)applicationWillResignActive;
+ (void)touchesEnded:withEvent:;
@end
