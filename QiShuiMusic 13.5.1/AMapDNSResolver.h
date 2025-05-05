@interface AMapDNSResolver : NSObject
@property (nonatomic) @? block;
@property (nonatomic) ^{__CFHost=} host;
@property (nonatomic) BOOL done;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) NSString hostname;
@property (nonatomic) NSArray addressStrs;
@property (nonatomic) NSError error;
- (void)setAddressStrs:;
- (id)addressStrs;
- (void)asyncLookupComplete:;
- (void)hostResolutionDoneWithAddresses:;
- (id)hostname;
- (id)block;
- (void)dealloc;
- (void)setHostname:;
- (id)host;
- (void)setHost:;
- (void)setError:;
- (BOOL)shouldCancel;
- (id)error;
- (void)setDone:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)stopHostResolution;
- (BOOL)done;
- (void)setShouldCancel:;
@end
