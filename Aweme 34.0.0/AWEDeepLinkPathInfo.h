@interface AWEDeepLinkPathInfo : NSObject
@property (nonatomic) NSString pathString;
@property (nonatomic) Q offset;
@property (nonatomic) @? actionHandler;
@property (nonatomic) BOOL limitHost;
@property (nonatomic) NSArray allowedHostList;
- (void)setPathString:;
- (BOOL)limitHost;
- (void)setLimitHost:;
- (id)allowedHostList;
- (void)setAllowedHostList:;
- (id)actionHandler;
- (void)setActionHandler:;
- (void)setOffset:;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)pathString;
@end
