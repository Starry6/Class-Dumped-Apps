@interface AWETrackerPassthroughApplyConfig : NSObject
@property (nonatomic) NSObject actualTransmissionObj;
@property (nonatomic) AWETrackerDictionary trackerContext;
@property (nonatomic) BOOL shouldApplyTransmission;
@property (nonatomic) BOOL shouldApplyAspect;
- (void)setTrackerContext:;
- (id)trackerContext;
- (void)setActualTransmissionObj:;
- (BOOL)shouldApplyTransmission;
- (void)setShouldApplyTransmission:;
- (BOOL)shouldApplyAspect;
- (void)setShouldApplyAspect:;
- (id)actualTransmissionObj;
- (id)init;
- (void).cxx_destruct;
+ (id)configWithTransmissionObj:;
+ (id)config;
@end
