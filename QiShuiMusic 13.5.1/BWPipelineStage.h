@interface BWPipelineStage : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I priority;
@property (nonatomic) BOOL stillImagePipelineStage;
@property (nonatomic) NSString stillImagePipelineStageEntryNodeName;
- (void)dealloc;
- (id)stillImagePipelineStageEntryNodeName;
- (BOOL)stillImagePipelineStage;
- (void)sendMessagesToInput:messageProvider:;
- (id)description;
- (id)name;
- (void)sendMessage:toInput:;
- (unsigned int)priority;
+ (id)pipelineStageWithName:priority:discardsLateSampleData:;
+ (id)pipelineStageForStillImagesWithName:priority:;
+ (id)pipelineStageWithName:priority:workgroup:discardsLateSampleData:;
+ (id)pipelineStageWithName:priority:;
+ (id)pipelineStageWithName:priority:workgroup:;
+ (id)pipelineStageForStillImagesWithName:entryNodeName:priority:;
@end
