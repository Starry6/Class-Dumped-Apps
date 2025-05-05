@interface AVMDLiOSCustomHttpDNSParser : NSObject
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) NSString hostname;
@property (nonatomic) @? result;
@property (nonatomic) <AVMDLCustomHttpDNSParser> httpDNSParser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_notifyError:async:;
- (id)httpDNSParser;
- (id)initWithHost:dnsParser:;
- (BOOL)isUserCancel;
- (void)setHttpDNSParser:;
- (void)setIsUserCancel:;
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
