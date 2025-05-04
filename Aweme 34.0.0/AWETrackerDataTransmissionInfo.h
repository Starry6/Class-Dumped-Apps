@interface AWETrackerDataTransmissionInfo : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) @? block;
@property (nonatomic) BOOL isAttached;
@property (nonatomic) AWETrackerDataTransmissionBlockConfig config;
- (id)attachTo:;
- (void)setIsAttached:;
- (id)initWithEvent:withBlock:;
- (void)setConfig:;
- (BOOL)isAttached;
- (id)initWithConfig:;
- (void)setEvent:;
- (id)config;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)event;
@end
