@interface FMDEmergencyCallInfoPublisher : NSObject
@property (nonatomic) FMDEmergencyCallInfoPublisherConfiguration publisherConfig;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (void)publishInfo:completion:;
- (id)publisherConfig;
- (void)setPublisherConfig:;
@end
