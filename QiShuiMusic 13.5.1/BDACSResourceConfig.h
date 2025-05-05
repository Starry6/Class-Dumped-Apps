@interface BDACSResourceConfig : NSObject
@property (nonatomic) BOOL onlyWIFIReport;
@property (nonatomic) q maxReportTimes;
@property (nonatomic) q fileSizeLimit;
@property (nonatomic) q packageSizeLimit;
@property (nonatomic) NSString reportKey;
@property (nonatomic) NSString reportURL;
@property (nonatomic) NSDictionary allowCIDList;
@property (nonatomic) NSDictionary allowHostList;
- (id)allowCIDList;
- (id)allowHostList;
- (long long)fileSizeLimit;
- (long long)maxReportTimes;
- (BOOL)onlyWIFIReport;
- (long long)packageSizeLimit;
- (id)reportKey;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)reportURL;
@end
