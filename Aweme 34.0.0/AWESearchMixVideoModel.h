@interface AWESearchMixVideoModel : AWEBaseApiModel
@property (nonatomic) AWEMixVideoModel mixInfo;
@property (nonatomic) NSArray mixItemsList;
@property (nonatomic) NSArray mixMoreIds;
- (id)mixInfo;
- (void)setMixInfo:;
- (void)setMixItemsList:;
- (id)mixMoreIds;
- (void)setMixMoreIds:;
- (id)mixItemsList;
- (void).cxx_destruct;
+ (id)mixInfoJSONTransformer;
+ (id)mixItemsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
