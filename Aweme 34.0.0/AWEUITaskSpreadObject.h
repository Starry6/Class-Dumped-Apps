@interface AWEUITaskSpreadObject : NSObject
@property (nonatomic) @? block;
@property (nonatomic) double runTime;
@property (nonatomic) @? finishBlock;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString groupID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGroupID:;
- (id)groupID;
- (double)runTime;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (void)setRunTime:;
- (void)setTaskID:;
- (id)taskID;
- (void)setFinishBlock:;
- (id)finishBlock;
@end
