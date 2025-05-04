@interface AWEUserProfileSpecificationTaskInfo : MTLModel
@property (nonatomic) q count;
@property (nonatomic) q taskId;
@property (nonatomic) q isPreview;
@property (nonatomic) q sceneType;
@property (nonatomic) NSDate createDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCreateDate:;
- (id)customerTaskInfoWith:;
- (id)init;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (long long)isPreview;
- (long long)taskId;
- (long long)sceneType;
- (void)setSceneType:;
- (void)setTaskId:;
- (id)createDate;
- (void)setIsPreview:;
+ (id)JSONKeyPathsByPropertyKey;
@end
