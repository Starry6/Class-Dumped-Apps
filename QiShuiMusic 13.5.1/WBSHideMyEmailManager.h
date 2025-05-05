@interface WBSHideMyEmailManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getRecordForURL:completionHandler:;
- (void)provisionRecordForURL:completionHandler:;
- (void)_performOperation:withURL:completionHandler:;
+ (id)sharedManager;
@end
