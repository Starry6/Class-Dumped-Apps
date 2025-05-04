@interface AWEUndertakeFilterTodayVVCondition : AWEUndertakeFilterBaseCondition
@property (nonatomic) Q count;
@property (nonatomic) q currentStatus;
@property (nonatomic) NSMutableDictionary dateAwemeDict;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (void)conditionOnPlayAweme:ofIndex:;
- (long long)statusWithData:extraInfo:;
- (id)dateAwemeDict;
- (void)setDateAwemeDict:;
- (void)setCurrentStatus:;
- (long long)currentStatus;
- (id)initWithCount:;
- (void)dealloc;
- (void)setCount:;
- (unsigned long long)count;
- (void).cxx_destruct;
- (long long)currentDay;
@end
