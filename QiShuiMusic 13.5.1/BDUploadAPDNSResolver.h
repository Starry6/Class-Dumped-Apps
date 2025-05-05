@interface BDUploadAPDNSResolver : NSObject
@property (nonatomic) NSString hostname;
@property (nonatomic) NSString ipAdrress;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) NSInteger isResult;
@property (nonatomic) q player;
- (BOOL)checkHostNameIsIP:;
- (void)getaddreinfo_start:;
- (void)getaddrinfo_free;
- (int)getaddrinfo_result:strSize:;
- (id)ipAdrress;
- (int)isResult;
- (void)parseDNS;
- (id)parseResult:;
- (void)setIpAdrress:;
- (void)setIsResult:;
- (id)hostname;
- (BOOL)isEnd;
- (void)setIsEnd:;
- (void)dealloc;
- (void)setHostname:;
- (long long)player;
- (void).cxx_destruct;
- (void)setPlayer:;
@end
