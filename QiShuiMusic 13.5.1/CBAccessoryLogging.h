@interface CBAccessoryLogging : NSObject
+ (id)getProductNameFromProductID:;
+ (unsigned long long)getComponentIDFromProductID:;
+ (id)getComponentNameFromProductID:;
+ (id)getComponentVersionFromProductID:;
+ (unsigned long long)getComponentIDFromRadarReason:;
+ (id)getComponentNameFromRadarReason:;
+ (id)getComponentVersionFromRadarReason:;
@end
