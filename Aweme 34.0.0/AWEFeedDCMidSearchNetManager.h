@interface AWEFeedDCMidSearchNetManager : NSObject
+ (id)requestSearchDCItemsWithBodyParams:args:timeout:completionBlock:;
+ (id)requestSearchDCItemsWithBodyParams:args:timeout:completionBlock:originCompletion:;
+ (id)requestSearchDCItemsWithBodyParams:completionBlock:;
+ (id)requestUrl;
@end
