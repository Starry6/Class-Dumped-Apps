@interface ShotflowDetectorANODv4 : ShotflowDetectorANODBase
- (id)nmsBoxes:;
- (id)initWithNetwork:filterThresholds:;
- (id)getIndexBoxes:filterThresholdIndex:;
- (id)initWithNetwork:;
- (id)processBoxes:withHeight:andWidth:;
+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
@end
