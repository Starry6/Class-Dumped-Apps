@interface MAProgressHandler : NSObject
@property (nonatomic) Q notificationInterval;
@property (nonatomic) NSMutableArray callBackArray;
- (void).cxx_destruct;
- (id)initWithCallBack:;
- (void)addCallBack:;
- (unsigned long long)notificationInterval;
- (void)setNotificationInterval:;
- (id)callBackArray;
@end
