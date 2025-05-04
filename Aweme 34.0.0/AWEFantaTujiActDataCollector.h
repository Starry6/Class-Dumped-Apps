@interface AWEFantaTujiActDataCollector : AWEFantaAbstractDataCollector
- (void)triggerTujiAction:forAwemeItem:;
- (void)triggerTujiAction:forAwemeItemID:referString:;
- (id)type;
+ (id)sharedInstance;
@end
