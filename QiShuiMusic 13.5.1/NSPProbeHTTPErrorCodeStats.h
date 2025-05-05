@interface NSPProbeHTTPErrorCodeStats : NSPProxyAnalytics
@property (nonatomic) NSString interfaceType;
@property (nonatomic) BOOL directPath;
@property (nonatomic) NSNumber HTTPErrorCode;
- (void)setInterfaceType:;
- (id)interfaceType;
- (id)eventName;
- (void).cxx_destruct;
- (id)analyticsDict;
- (BOOL)directPath;
- (void)setDirectPath:;
- (id)HTTPErrorCode;
- (void)setHTTPErrorCode:;
@end
