@interface AWEDTOPoiTaskModel : MTLModel
@property (nonatomic) NSString taskId;
@property (nonatomic) q taskType;
@property (nonatomic) NSString taskName;
@property (nonatomic) NSString taskOrderId;
@property (nonatomic) NSString taskExtra;
@property (nonatomic) NSString trackDict;
@property (nonatomic) NSString taskOriginInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackDict:;
- (id)trackDict;
- (id)taskOrderId;
- (void)setTaskOrderId:;
- (id)taskExtra;
- (void)setTaskExtra:;
- (id)taskOriginInfo;
- (void)setTaskOriginInfo:;
- (long long)taskType;
- (void)setTaskName:;
- (id)taskName;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskType:;
- (void)setTaskId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
