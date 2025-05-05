@interface PARTopicRequest : PARRequest
@property (nonatomic) NSArray topics;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) NSArray localTopics;
@property (nonatomic) NSArray queryTopicContexts;
- (void)setTopics:;
- (id)topics;
- (Class)responseClass;
- (id)initWithCoder:;
- (void)setTimeoutIntervalForRequest:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)timeoutIntervalForRequest;
- (id)queryTopicContexts;
- (unsigned int)nwActivityLabel;
- (id)localTopics;
+ (BOOL)supportsSecureCoding;
@end
