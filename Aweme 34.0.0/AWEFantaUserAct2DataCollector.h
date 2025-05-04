@interface AWEFantaUserAct2DataCollector : AWEFantaAbstractDataCollector
- (void)triggerUserAction2:forAwemeItem:;
- (void)triggerUserAction2:forAwemeItemID:referString:;
- (id)type;
+ (id)sharedInstance;
@end
