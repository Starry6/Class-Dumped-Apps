@interface CAActiveDeviceStreamsForProcess : NSObject
@property (nonatomic) CAProcessDevicePair pair;
@property (nonatomic) NSArray activeStreams;
- (id)pair;
- (void).cxx_destruct;
- (id)activeStreams;
- (id)initWithProcessDevicePair:andActiveStreamArray:;
@end
