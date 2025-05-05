@interface IESECShopPopupManager : NSObject
@property (nonatomic) NSMutableArray tasks;
- (id)findTaskByPriority:;
- (void)triggerPopupShow:;
- (void)triggerPopupShow:fromContinue:skip:;
- (void)addTask:;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:;
@end
