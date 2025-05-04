@interface AWEPublishStageNetScheduler : NSObject
@property (nonatomic) ACCThreadSafeMutableDictionary stageNetDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)triggerEvent:flowId:;
- (id)stageNet:;
- (id)printInfo:;
- (id)builder:flowModel:observer:publishTask:;
- (id)stagesWithTypes:flowId:;
- (id)stageNetDict;
- (id)printInfoWithStageNet:;
- (id)printInfoWithStage:;
- (void)printInfoWithStage:print:prefix:;
- (id)stageWithType:flowId:;
- (id)stageNets;
- (void)setStageNetDict:;
- (void)start:;
- (void)remove:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
