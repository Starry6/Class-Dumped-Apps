@interface AWEPOIReflowUtil : NSObject
+ (BOOL)shouldLifeShareReflowToNearbyWithNine;
+ (id)convertJSONStringValueToDict:;
+ (id)convertDictValueToJSONString:encode:;
+ (id)lifeShareReflowToNearbyWithNine;
+ (BOOL)poiShouldReflow:;
+ (id)mergeDictionary:withDictionary:;
@end
