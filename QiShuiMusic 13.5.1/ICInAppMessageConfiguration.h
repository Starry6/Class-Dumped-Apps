@interface ICInAppMessageConfiguration : NSObject
@property (nonatomic) NSURL reportEventURL;
@property (nonatomic) NSURL serialCheckURL;
@property (nonatomic) NSURL syncURL;
@property (nonatomic) NSURL resourceDomainURL;
@property (nonatomic) q syncPollingInterval;
- (id)initWithDictionary:;
- (id)resourceDomainURL;
- (void).cxx_destruct;
- (long long)syncPollingInterval;
- (id)reportEventURL;
- (id)syncURL;
- (id)serialCheckURL;
@end
