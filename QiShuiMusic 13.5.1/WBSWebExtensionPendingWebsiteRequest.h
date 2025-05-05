@interface WBSWebExtensionPendingWebsiteRequest : NSObject
@property (nonatomic) NSSet urls;
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString apiName;
@property (nonatomic) NSDate expirationDate;
- (id)urls;
- (void)setExpirationDate:;
- (void)setCompletionHandler:;
- (void)setUrls:;
- (id)expirationDate;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)setApiName:;
- (id)apiName;
@end
