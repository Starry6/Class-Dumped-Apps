@interface MSDiagnosticManager : NSObject
@property (nonatomic) AWDServerConnection awdServerConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)awdServerConnection;
- (void)submitSearchSessionWithSearchEngagement:numberOfMessagesLeftToIndex:percentOfMessagesIndexed:emailProvider:;
- (BOOL)submitWithIdentifier:metricGenerator:;
- (void)submitMessageLoadingReport:;
- (void)submitComposeAttachmentReport:;
- (void)submitFetchMetricsReport:;
+ (id)log;
@end
