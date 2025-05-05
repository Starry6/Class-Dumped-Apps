@interface BUTNCServiceConfig : NSObject
@property (nonatomic) NSString appKey;
@property (nonatomic) NSString tncPath;
@property (nonatomic) NSArray tncDomains;
@property (nonatomic) @? tncRequestParam;
- (id)tncPath;
- (id)tncRequestParam;
- (id)appKey;
- (void)setAppKey:;
- (void)setTncDomains:;
- (void)setTncPath:;
- (void)setTncRequestParam:;
- (id)tncDomains;
- (void).cxx_destruct;
@end
