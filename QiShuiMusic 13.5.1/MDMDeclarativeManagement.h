@interface MDMDeclarativeManagement : NSObject
+ (void)executeRequestForEndpoint:channelType:requestData:completionHandler:;
+ (void)fetchDataAtURL:completionHandler:;
+ (id)_createUnsupportedFeatureError;
@end
