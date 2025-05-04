@interface AWEIMEntryQuickReplyDormancy : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSDate today;
@property (nonatomic) NSNumber result;
@property (nonatomic) q displayNDays;
@property (nonatomic) q dormantMDays;
@property (nonatomic) NSString version;
- (void)setDisplayNDays:;
- (void)setDormantMDays:;
- (long long)displayNDays;
- (long long)dormantMDays;
- (void)setUid:;
- (void)setResult:;
- (id)uid;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)today;
- (id)result;
- (void)setToday:;
+ (void)resetDisplayedDays;
+ (BOOL)isDormantCacheWithNowDate:uid:;
+ (BOOL)p_isDormantWithNowDate:uid:;
+ (void)p_resetDisplayedDaysWithDate:;
+ (id)sharedInstance;
+ (BOOL)isDormant;
@end
