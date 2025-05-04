@interface AWEUndertakeFilterPlayAwemeCountCondition : AWEUndertakeFilterBaseCondition
@property (nonatomic) q playCountLimit;
@property (nonatomic) NSMutableDictionary playedIndexDict;
@property (nonatomic) q currentStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)conditionOnPlayAweme:ofIndex:;
- (long long)statusWithData:extraInfo:;
- (unsigned long long)calcPlayCountLimitInRange:;
- (id)playedIndexDict;
- (long long)playCountLimit;
- (id)initWithCountRange:;
- (void)setPlayCountLimit:;
- (void)setPlayedIndexDict:;
- (void)setCurrentStatus:;
- (long long)currentStatus;
- (id)init;
- (id)initWithCountLimit:;
- (void)dealloc;
- (void).cxx_destruct;
@end
