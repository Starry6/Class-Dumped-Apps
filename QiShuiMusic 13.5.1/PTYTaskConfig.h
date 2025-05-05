@interface PTYTaskConfig : NSObject
@property (nonatomic) BOOL async;
@property (nonatomic) NSString entrance;
@property (nonatomic) float pendingTimeout;
@property (nonatomic) Q callType;
- (id)entrance;
- (float)pendingTimeout;
- (void)setEntrance:;
- (void)setPendingTimeout:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)async;
- (void)setAsync:;
- (unsigned long long)callType;
- (void)setCallType:;
@end
