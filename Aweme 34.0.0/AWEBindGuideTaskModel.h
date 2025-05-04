@interface AWEBindGuideTaskModel : MTLModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString bindType;
@property (nonatomic) q popupTotalTimes;
@property (nonatomic) q popupInterval;
@property (nonatomic) NSArray sceneList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)popupInterval;
- (void)setPopupInterval:;
- (void)setBindType:;
- (long long)popupTotalTimes;
- (void)setPopupTotalTimes:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
- (id)bindType;
- (id)sceneList;
- (void)setSceneList:;
+ (id)sceneListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
