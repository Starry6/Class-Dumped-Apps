@interface AWEFantaUserActDataCollector : AWEFantaAbstractDataCollector
- (void)triggerUserAction:forAwemeItem:;
- (id)type;
+ (id)sharedInstance;
@end
