@interface MDARSession : NSObject
+ (BOOL)isSupported;
+ (id)newGeoTrackingSession;
+ (id)newPositionalTrackingSession;
+ (id)stringWithARTrackingState:;
+ (id)stringWithARTrackingStateReason:;
+ (id)stringWithARGeoTrackingState:;
+ (id)stringWithARGeoTrackingStateReason:;
+ (id)stringWithARGeoTrackingAccuracy:;
@end
