@interface AWENewHotSpotEventResponseModel : AWEBaseApiModel
@property (nonatomic) NSString timelineID;
@property (nonatomic) NSArray tabList;
@property (nonatomic) NSString pageID;
- (id)tabList;
- (void)setTabList:;
- (id)timelineID;
- (void)setTimelineID:;
- (void).cxx_destruct;
- (void)setPageID:;
- (id)pageID;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
