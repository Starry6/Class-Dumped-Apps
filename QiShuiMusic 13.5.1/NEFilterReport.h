@interface NEFilterReport : NSObject
@property (nonatomic) NEFilterFlow flow;
@property (nonatomic) q action;
@property (nonatomic) Q bytesInboundCount;
@property (nonatomic) Q bytesOutboundCount;
@property (nonatomic) q event;
- (id)init;
- (long long)event;
- (long long)action;
- (id)initWithCoder:;
- (void)setAction:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)flow;
- (void)setFlow:;
- (unsigned long long)bytesInboundCount;
- (void)setBytesInboundCount:;
- (unsigned long long)bytesOutboundCount;
- (void)setBytesOutboundCount:;
+ (BOOL)supportsSecureCoding;
@end
