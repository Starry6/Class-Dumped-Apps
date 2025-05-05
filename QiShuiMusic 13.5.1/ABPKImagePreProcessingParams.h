@interface ABPKImagePreProcessingParams : NSObject
@property (nonatomic) ABPKCropParams cropParams;
@property (nonatomic) ABPKPaddingParams paddingParams;
@property (nonatomic) ABPKDirectScalingParams scalingParams;
@property (nonatomic) NSInteger type;
@property (nonatomic) {CGSize=dd} inputResolution;
@property (nonatomic) {CGSize=dd} outputResolution;
- (int)type;
- (void).cxx_destruct;
- (id)outputResolution;
- (id)initWithType:inputResolution:outputResolution:;
- (id)inputResolution;
- (void)printData;
- (id)cropParams;
- (id)paddingParams;
- (id)scalingParams;
+ (id)convert2DPoint:toInputSpaceWithParams:;
@end
