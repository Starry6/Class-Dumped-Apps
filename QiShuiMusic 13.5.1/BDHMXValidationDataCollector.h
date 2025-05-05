@interface BDHMXValidationDataCollector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getBidFromDict:;
- (void)onEventCreated:;
- (void)collectValidationParamsFrom:desc:;
- (void)onEventTerminated:;
- (void)onEventUnSampled:;
- (void)onEventUploaded:;
- (id)transTerminatedReasonFrom:;
- (void)uploadDataToPlatform:;
+ (id)shared;
@end
