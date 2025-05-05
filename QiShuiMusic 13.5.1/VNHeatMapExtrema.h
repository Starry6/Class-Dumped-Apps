@interface VNHeatMapExtrema : NSObject
- (id)init;
- (void)updateExtrema:x:y:;
- (id)computeRectFromExtremaUsingThreshold:vImage:;
@end
