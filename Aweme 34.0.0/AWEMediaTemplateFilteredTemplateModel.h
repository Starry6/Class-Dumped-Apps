@interface AWEMediaTemplateFilteredTemplateModel : MTLModel
@property (nonatomic) NSString templateID;
@property (nonatomic) q filterType;
@property (nonatomic) NSString filterReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterReason;
- (void)setFilterReason:;
- (void)setFilterType:;
- (long long)filterType;
- (id)templateID;
- (void)setTemplateID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
