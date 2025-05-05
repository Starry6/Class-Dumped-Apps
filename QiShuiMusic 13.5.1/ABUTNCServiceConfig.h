@interface ABUTNCServiceConfig : NSObject
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString tncUrl;
@property (nonatomic) NSArray tncDomains;
@property (nonatomic) @? tncRequestParam;
- (id)tncRequestParam;
- (id)appKey;
- (void)setAppKey:;
- (void)setTncDomains:;
- (void)setTncRequestParam:;
- (void)setTncUrl:;
- (id)tncDomains;
- (id)tncUrl;
- (void).cxx_destruct;
@end
