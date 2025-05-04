@interface AWEInnerPushExitRangeMappingProcessedModel : NSObject
@property (nonatomic) NSMutableDictionary groupToSetIdsDict;
@property (nonatomic) NSMutableDictionary typeToSetIdsDict;
@property (nonatomic) NSMutableDictionary templateIdToSetIdsDict;
- (id)groupToSetIdsDict;
- (void)addKeyArray:setId:toDict:;
- (id)typeToSetIdsDict;
- (id)templateIdToSetIdsDict;
- (void)setGroupToSetIdsDict:;
- (void)setTypeToSetIdsDict:;
- (void)setTemplateIdToSetIdsDict:;
- (id)init;
- (void).cxx_destruct;
@end
