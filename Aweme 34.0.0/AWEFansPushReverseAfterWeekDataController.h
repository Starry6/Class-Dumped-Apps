@interface AWEFansPushReverseAfterWeekDataController : AWEListDataController
@property (nonatomic) q total;
- (id)init;
- (void)refreshWithCompletion:;
- (long long)total;
- (void)setTotal:;
@end
