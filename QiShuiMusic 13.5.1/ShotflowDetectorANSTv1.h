@interface ShotflowDetectorANSTv1 : ShotflowDetectorANODBase
- (id)nmsBoxes:;
- (id)initWithNetwork:filterThresholds:;
- (id)getIndexBoxes:filterThresholdIndex:;
- (id)initWithNetwork:;
- (id)processBoxes:withHeight:andWidth:;
- (id)modifySmallFaceThrehold:withHeight:andWidth:;
+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
@end
