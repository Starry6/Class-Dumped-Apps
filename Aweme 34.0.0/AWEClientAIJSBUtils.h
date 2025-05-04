@interface AWEClientAIJSBUtils : NSObject
- (id)getFeaturesFromGroup:withFeatureList:featureName:params:;
- (void)getNativeSmartFeatureWithParams:callback:;
+ (id)sharedInstance;
@end
