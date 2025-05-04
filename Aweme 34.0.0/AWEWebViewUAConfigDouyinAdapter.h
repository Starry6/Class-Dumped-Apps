@interface AWEWebViewUAConfigDouyinAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)deprecatedStoredUA;
+ (id)fetchOrUpdateUserAgentNowOnMainThread;
+ (id)fetchOrUpdateUserAgentNow;
+ (id)fetchCachedUserAgent;
+ (id)baseUserAgent;
+ (id)fetchSystemUserAgent;
@end
