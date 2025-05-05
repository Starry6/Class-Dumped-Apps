@interface BWFusionTrackerObservable : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)confidence;
- (void)dealloc;
- (id)metadata;
- (unsigned long long)identifier;
- (id)box;
- (long long)objectKind;
- (id)frameTimestamp;
- (id)lastDetectionTimestamp;
@end
