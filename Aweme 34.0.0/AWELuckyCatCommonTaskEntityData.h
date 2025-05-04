@interface AWELuckyCatCommonTaskEntityData : NSObject
@property (nonatomic) NSString taskKey;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSString taskBusinessType;
@property (nonatomic) BOOL needRewardRequest;
@property (nonatomic) BOOL closeAutoRemove;
- (id)taskKey;
- (void)setTaskKey:;
- (id)initWithTaskKey:needRewardRequest:;
- (id)taskBusinessType;
- (void)setTaskBusinessType:;
- (BOOL)needRewardRequest;
- (void)setNeedRewardRequest:;
- (BOOL)closeAutoRemove;
- (void)setCloseAutoRemove:;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
@end
