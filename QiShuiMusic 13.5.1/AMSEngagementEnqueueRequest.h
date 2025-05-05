@interface AMSEngagementEnqueueRequest : NSObject
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSArray destinations;
@property (nonatomic) NSArray events;
@property (nonatomic) NSString logKey;
@property (nonatomic) double timeout;
- (void)setClientInfo:;
- (id)destinations;
- (void)setLogKey:;
- (id)clientInfo;
- (id)logKey;
- (void)setTimeout:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEvents:;
- (void).cxx_destruct;
- (void)setDestinations:;
- (id)events;
- (double)timeout;
+ (BOOL)supportsSecureCoding;
+ (id)archiveClasses;
@end
