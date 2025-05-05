@interface SFCompanionAdvertiser : NSObject
@property (nonatomic) <SFCompanionAdvertiserDelegate> delegate;
@property (nonatomic) BOOL supportsStreams;
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSData serviceEndpointData;
- (void)dealloc;
- (void)start;
- (id)serviceType;
- (void)setDelegate:;
- (void)stop;
- (id)initWithServiceType:;
- (id)delegate;
- (void).cxx_destruct;
- (id)serviceEndpointData;
- (void)getContinuationStreamsWithEndpointData:completionHandler:;
- (BOOL)supportsStreams;
- (void)setSupportsStreams:;
@end
