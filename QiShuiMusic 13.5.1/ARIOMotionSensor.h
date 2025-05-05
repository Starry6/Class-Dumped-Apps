@interface ARIOMotionSensor : NSObject
@property (nonatomic) <ARSensorDelegate> delegate;
@property (nonatomic) Q powerUsage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (void).cxx_destruct;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)waitForOutstandingCallbacks;
- (void)accelerometerDidOutputEvent:timestamp:;
- (void)gyroscopeDidOutputEvent:timestamp:;
@end
