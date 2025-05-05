@interface VNObjectTracker : VNTracker
- (id)_parseInputObservations:imageBuffer:error:;
+ (Class)trackerObservationClass;
@end
