@interface UISClickAttribution : NSObject
@property (nonatomic) C sourceIdentifier;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSURL reportEndpoint;
@property (nonatomic) NSString sourceDescription;
@property (nonatomic) NSString purchaser;
@property (nonatomic) BKSHIDEventAuthenticationMessage eventMessage;
- (id)purchaser;
- (unsigned char)sourceIdentifier;
- (id)sourceDescription;
- (id)initWithCoder:;
- (id)destinationURL;
- (unsigned long long)hash;
- (id)reportEndpoint;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSourceIdentifier:destinationURL:reportEndpoint:sourceDescription:purchaser:eventMessage:;
- (id)clickAttributionWithReportEndpoint:;
- (id)eventMessage;
+ (BOOL)supportsSecureCoding;
@end
