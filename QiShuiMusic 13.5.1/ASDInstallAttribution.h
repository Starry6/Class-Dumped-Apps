@interface ASDInstallAttribution : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_initWithServiceBroker:;
- (void).cxx_destruct;
- (void)addInstallWebAttributionParamsWithConfig:completionHandler:;
- (void)addInstallAttributionParamsWithConfig:completionHandler:;
- (void)startPingbackTaskWithCompletionHandler:;
- (void)updatePostbackConversionValuesForApp:fineConversionValue:coarseConversionValue:completionHandler:;
- (void)updatePostbackConversionValuesForApp:fineConversionValue:coarseConversionValue:lockWindow:completionHandler:;
- (void)startImpressionWithConfig:completionHandler:;
- (void)endImpressionWithConfig:completionHandler:;
- (void)addInstallAttributionParamsWithConfig:;
- (void)registerInstallAttributionPingbackForApp:completionHandler:;
- (void)updateConversionValueForInstallAttributionPingbackForApp:conversionValue:completionHandler:;
+ (id)interface;
+ (id)sharedInstance;
@end
