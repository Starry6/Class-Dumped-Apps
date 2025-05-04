@interface AWEInnerPushDisplayDurationConfig : MTLModel
@property (nonatomic) BOOL enabled;
@property (nonatomic) double globalDuration;
@property (nonatomic) NSDictionary groupConfigDict;
@property (nonatomic) NSDictionary typeConfigDict;
@property (nonatomic) NSDictionary templateIdConfigDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeConfigDict;
- (void)setTypeConfigDict:;
- (double)globalDuration;
- (id)groupConfigDict;
- (id)templateIdConfigDict;
- (void)setGlobalDuration:;
- (void)setGroupConfigDict:;
- (void)setTemplateIdConfigDict:;
- (void)setEnabled:;
- (BOOL)enabled;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
