@interface AWEAntiAddictDailyAlertAction : AWEAntiAddictBaseAction
@property (nonatomic) Q viewType;
@property (nonatomic) BOOL isDay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)updatedDataOnBegin;
- (void)dailyAlert:didShowWithSuccess:;
- (void)dailyAlertDidDismiss:;
- (BOOL)shouldUseNewStyle;
- (void)begin;
- (BOOL)isDay;
- (void)end;
- (unsigned long long)viewType;
- (void)setViewType:;
- (void)setIsDay:;
+ (id)moduleName;
@end
