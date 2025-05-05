@interface BDFileUploadiOSDNSTTParser : NSObject
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) NSString hostname;
@property (nonatomic) BDFileUploadiOSNetwork networkSession;
@property (nonatomic) @? result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
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
- (void)_notifyError:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)setResult:;
- (long long)parserType;
@end
