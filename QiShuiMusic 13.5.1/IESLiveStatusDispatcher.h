@interface IESLiveStatusDispatcher : NSObject
@property (nonatomic) NSHashTable registers;
@property (nonatomic) Q currentStatus;
@property (nonatomic) Q changeStatus;
- (void)addRegister:;
- (unsigned long long)changeStatus;
- (void)changeStatus:;
- (void)real_changeStatus;
- (void)setChangeStatus:;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)setCurrentStatus:;
- (id)registers;
@end
