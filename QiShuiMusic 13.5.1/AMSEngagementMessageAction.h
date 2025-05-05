@interface AMSEngagementMessageAction : NSObject
@property (nonatomic) NSDictionary clickstreamMetricsEvent;
@property (nonatomic) NSURL deepLink;
@property (nonatomic) NSURL iconURL;
@property (nonatomic) AMSMetricsEvent metricsEvent;
@property (nonatomic) q style;
@property (nonatomic) NSString title;
- (void)setIconURL:;
- (void)setStyle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)iconURL;
- (long long)style;
- (id)metricsEvent;
- (void)setMetricsEvent:;
- (id)clickstreamMetricsEvent;
- (void)setClickstreamMetricsEvent:;
- (id)deepLink;
- (void)setDeepLink:;
- (id)initWithJSObject:;
@end
