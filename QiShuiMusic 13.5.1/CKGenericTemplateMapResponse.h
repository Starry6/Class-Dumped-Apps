@interface CKGenericTemplateMapResponse : MTLModel
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasNext;
@property (nonatomic) NSString reqId;
@property (nonatomic) NSArray templates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addRecId;
- (id)reqId;
- (long long)cursor;
- (void).cxx_destruct;
- (id)templates;
- (BOOL)hasNext;
+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
