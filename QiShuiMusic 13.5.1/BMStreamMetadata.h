@interface BMStreamMetadata : NSObject
@property (nonatomic) NSString remoteStreamName;
@property (nonatomic) NSString streamId;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) # eventDataClass;
@property (nonatomic) BMPruningPolicy pruningPolicy;
- (id)remoteStreamName;
- (id)streamId;
- (id)pruningPolicy;
- (void)setRemoteStreamName:;
- (id)initWithStreamId:eventType:remoteStreamName:pruningPolicy:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:key:coder:errorDomain:errorCode:;
- (void).cxx_destruct;
- (BOOL)isRemote;
- (Class)eventDataClass;
- (BOOL)isEqual:;
- (BOOL)isEqualStreamMetadata:;
+ (BOOL)supportsSecureCoding;
@end
