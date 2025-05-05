@interface AFServiceCenter : NSObject
@property (nonatomic) NSDate lastCallDate;
@property (nonatomic) NSMutableDictionary tasks;
- (void)callService:withParams:andCompletion:;
- (BOOL)checkIfRepeat;
- (id)findTaskWithSession:;
- (void)handleResponseURL:withCompletion:;
- (id)lastCallDate;
- (void)setLastCallDate:;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:;
+ (id)bizNameByService:;
+ (void)callService:withParams:andCompletion:;
+ (void)handleResponseURL:withCompletion:;
+ (id)shared;
@end
