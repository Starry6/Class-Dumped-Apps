@interface UIEventAttribution : NSObject
@property (nonatomic) C sourceIdentifier;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSURL reportEndpoint;
@property (nonatomic) NSString sourceDescription;
@property (nonatomic) NSString purchaser;
- (id)purchaser;
- (unsigned char)sourceIdentifier;
- (id)sourceDescription;
- (id)initWithSourceIdentifier:destinationURL:reportEndpoint:sourceDescription:purchaser:;
- (id)destinationURL;
- (unsigned long long)hash;
- (id)reportEndpoint;
- (id)initWithSourceIdentifier:destinationURL:sourceDescription:purchaser:;
- (id)initWithUISClickAttribution:;
- (id)toUISClickAttribution;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
