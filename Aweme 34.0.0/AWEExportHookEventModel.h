@interface AWEExportHookEventModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary params;
@property (nonatomic) double time;
- (id)toReportDic;
- (double)time;
- (void)setTime:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)params;
- (void)setParams:;
@end
