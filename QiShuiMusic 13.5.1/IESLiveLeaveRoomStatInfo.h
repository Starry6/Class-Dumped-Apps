@interface IESLiveLeaveRoomStatInfo : NSObject
@property (nonatomic) NSInteger reason;
@property (nonatomic) NSString desc;
@property (nonatomic) HMDOOMCrashInfo info;
- (id)desc;
- (void)setInfo:;
- (void)setDesc:;
- (int)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (id)info;
@end
