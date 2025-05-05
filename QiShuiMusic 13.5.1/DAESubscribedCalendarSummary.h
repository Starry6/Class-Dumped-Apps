@interface DAESubscribedCalendarSummary : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString notes;
@property (nonatomic) NSString color;
@property (nonatomic) double refreshInterval;
@property (nonatomic) NSString subscriptionID;
@property (nonatomic) NSData data;
@property (nonatomic) NSURL subscriptionURL;
- (id)notes;
- (void)setSubscriptionID:;
- (id)subscriptionID;
- (void)setColor:;
- (id)data;
- (void)setTitle:;
- (id)initWithCoder:;
- (double)refreshInterval;
- (id)color;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (void)setNotes:;
- (void)setData:;
- (void)setRefreshInterval:;
- (void)setSubscriptionURL:;
- (id)subscriptionURL;
+ (BOOL)supportsSecureCoding;
@end
