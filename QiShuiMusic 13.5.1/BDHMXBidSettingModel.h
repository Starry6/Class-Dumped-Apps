@interface BDHMXBidSettingModel : NSObject
@property (nonatomic) q hitSample;
@property (nonatomic) NSString bid;
@property (nonatomic) NSArray regexList;
@property (nonatomic) NSDictionary bidEventSample;
- (BOOL)isTeaSwitchOpen;
- (void)setBid:;
- (id)bid;
- (id)bidEventSample;
- (long long)hitSample;
- (BOOL)needReportWithServiceName:;
- (BOOL)needReportWithServiceType:;
- (void)parseDictionary:;
- (id)regexList;
- (void)setBidEventSample:;
- (void)setHitSample:;
- (void)setRegexList:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
