@interface BDHMRepeatRecordFilter : NSObject
@property (nonatomic) <BDHMRepeatRecordFilterDelegate> delegate;
@property (nonatomic) BDHMRepeatCacheInfo lastInfo;
- (void)dealReapeatDataWithIsRepeat:record:event:;
- (void)dumpAllCachedData;
- (BOOL)isRepeatWithNewRecord:eventName:;
- (BOOL)isRepeatWithNewRecord:eventName:diif:;
- (id)lastInfo;
- (void)setLastInfo:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)eventKeyParams:;
+ (BOOL)isEqualRecordDict:diffDict:;
+ (BOOL)isEqualRecordValue:diffValue:;
@end
