@interface CoreDAVSupportedReportSetItem : CoreDAVItem
@property (nonatomic) NSMutableSet supportedReports;
- (id)supportedReports;
- (id)init;
- (BOOL)supportsReportWithNameSpace:andName:;
- (void).cxx_destruct;
- (id)description;
- (void)addSupportedReport:;
- (void)setSupportedReports:;
+ (id)copyParseRules;
@end
