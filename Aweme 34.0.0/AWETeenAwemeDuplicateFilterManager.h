@interface AWETeenAwemeDuplicateFilterManager : NSObject
@property (nonatomic) NSMutableSet yesterDaySet;
@property (nonatomic) NSMutableSet todaySet;
@property (nonatomic) NSDate todayDate;
- (void)setSet:forKey:;
- (id)todayDate;
- (void)setTodayDate:;
- (id)todaySet;
- (void)setYesterDaySet:;
- (void)setTodaySet:;
- (id)yesterDaySet;
- (void)addAwemeID:;
- (id)init;
- (id)dateForKey:;
- (void).cxx_destruct;
- (BOOL)isDuplicate:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setDate:forKey:;
- (id)setForKey:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
