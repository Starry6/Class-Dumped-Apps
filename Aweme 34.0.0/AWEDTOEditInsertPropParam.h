@interface AWEDTOEditInsertPropParam : MTLModel
@property (nonatomic) NSString propId;
@property (nonatomic) BOOL autoOpenPanel;
@property (nonatomic) BOOL autoApply;
@property (nonatomic) NSArray customPropIds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)autoOpenPanel;
- (void)setAutoOpenPanel:;
- (BOOL)autoApply;
- (void)setAutoApply:;
- (id)customPropIds;
- (void)setCustomPropIds:;
- (id)propId;
- (void)setPropId:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
