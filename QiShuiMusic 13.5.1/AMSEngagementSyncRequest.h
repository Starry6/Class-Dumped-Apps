@interface AMSEngagementSyncRequest : NSObject
@property (nonatomic) NSArray apps;
@property (nonatomic) NSDictionary context;
@property (nonatomic) NSString logKey;
@property (nonatomic) double timeout;
- (void)setLogKey:;
- (id)context;
- (id)logKey;
- (id)apps;
- (void)setTimeout:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timeout;
- (void)setContext:;
- (void)setApps:;
+ (BOOL)supportsSecureCoding;
+ (id)archiveClasses;
@end
