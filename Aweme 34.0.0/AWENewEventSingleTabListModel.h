@interface AWENewEventSingleTabListModel : AWEBaseApiModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString tabName;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString nextTimelineID;
@property (nonatomic) NSArray eventList;
- (id)eventList;
- (void)setEventList:;
- (void)setTabID:;
- (id)nextTimelineID;
- (void)setNextTimelineID:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
- (id)tabID;
- (id)tabName;
- (void)setTabName:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)eventListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
