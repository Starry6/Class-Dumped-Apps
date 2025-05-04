@interface AWEPOIDetailNGFrequentControllUtil : NSObject
- (double)timeWithKey:;
- (BOOL)hasRecordTimeWithKey:;
- (BOOL)isWithinScopeWithKey:scope:;
- (void)removeTimeWithKey:;
- (void)recordTimeWithKey:;
- (void)recordWithKey:time:;
- (BOOL)canShowWithFreqList:;
- (void)recordCloseWtihFreqList:;
- (void)clearWtihFreqList:;
@end
