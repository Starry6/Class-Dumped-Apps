@interface AnnieXCardModelNotifier : NSObject
- (void)notifyIfDataChangedByFront:cardModel:;
- (void)notifyIfLynxPreserveDataChangedByFront:cardModel:;
- (void)notifyIfPreserveDataChangedByFront:cardModel:;
- (void)p_notifyIfLynxPreserveDataChangedByFront:cardModel:lynxView:mainThread:;
+ (id)shareInstance;
@end
