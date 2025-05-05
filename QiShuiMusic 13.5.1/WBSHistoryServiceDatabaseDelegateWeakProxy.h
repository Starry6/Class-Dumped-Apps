@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)reportPermanentIDsForItems:completionHandler:;
- (void)reportPermanentIDsForVisits:completionHandler:;
- (void)handleEvent:completionHandler:;
- (void).cxx_destruct;
- (void)reportSevereError:completionHandler:;
- (id)initWithDelegate:;
@end
