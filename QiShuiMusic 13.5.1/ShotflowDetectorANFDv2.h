@interface ShotflowDetectorANFDv2 : ShotflowDetectorANODBase
- (id)nmsBoxes:;
- (id)initWithNetwork:filterThresholds:;
- (id)initWithNetwork:;
- (id)processBoxes:withHeight:andWidth:;
+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
@end
