@interface TVLDNSServerParser : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) BOOL didHasStartDNSParser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestDNSServerWithCompletion:;
- (BOOL)didHasStartDNSParser;
- (void)parser:didCancelParsingHostname:;
- (void)parser:didFinishParsingHostname:withParesedAddresses:error:;
- (void)setDidHasStartDNSParser:;
- (void)updateDNSServerIP;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)defaultParser;
@end
