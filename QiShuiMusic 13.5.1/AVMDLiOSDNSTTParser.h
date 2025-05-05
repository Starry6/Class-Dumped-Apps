@interface AVMDLiOSDNSTTParser : NSObject
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) NSString hostname;
@property (nonatomic) <AVMDLiOSNetClientProtocol> networkSession;
@property (nonatomic) @? result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_notifyError:async:;
- (BOOL)isUserCancel;
- (id)networkSession;
- (void)setIsUserCancel:;
- (void)setNetworkSession:;
- (id)hostname;
- (id)result;
- (BOOL)cancelled;
- (void)cancel;
- (void)start:;
- (void)dealloc;
- (void)setHostname:;
- (id)host;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)setResult:;
- (long long)parserType;
@end
