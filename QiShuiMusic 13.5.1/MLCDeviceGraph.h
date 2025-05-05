@interface MLCDeviceGraph : NSObject
@property (nonatomic) MLCDevice device;
@property (nonatomic) NSMutableArray graphLayerList;
@property (nonatomic) NSMutableSet liveOutputs;
@property (nonatomic) NSMutableSet liveInputs;
- (void).cxx_destruct;
- (id)device;
- (id)initDeviceGraphWithLayers:device:;
- (id)graphLayerList;
- (void)setGraphLayerList:;
- (id)liveOutputs;
- (void)setLiveOutputs:;
- (id)liveInputs;
- (void)setLiveInputs:;
+ (id)deviceGraphWithLayers:device:;
@end
