@interface AWETrackerDataTransmissionInfoBuilder : NSObject
@property (nonatomic) AWETrackerDataTransmissionBlockConfig config;
- (id)buildWithEvent:block:;
- (void)setConfig:;
- (id)init;
- (id)initWithConfig:;
- (id)config;
- (id)build;
- (void).cxx_destruct;
@end
