@interface IESECShopEventRecorder : NSObject
@property (nonatomic) NSMutableDictionary eventRecords;
- (id)eventRecordForTabType:;
- (id)eventRecords;
- (BOOL)p_checkEventParams:filterRule:;
- (void)recordEvent:params:curTabType:;
- (void)recordScrollOffset:curTabType:;
- (void)setEventRecords:;
- (id)userBehaviorReportParams;
- (id)init;
- (void).cxx_destruct;
@end
