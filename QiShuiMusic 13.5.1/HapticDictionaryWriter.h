@interface HapticDictionaryWriter : NSObject
- (id)patternToDictionary:events:parameters:parameterCurves:embeddedResourceInfo:configuration:;
- (id)eventToDictionary:embeddedResourceInfo:;
- (id)eventParamsToArray:;
- (id)paramToDictionary:;
- (id)paramCurveToDictionary:;
- (id)paramCurveControlPointsToArray:;
@end
