@interface MPBaseEntityTranslator : NSObject
@property (nonatomic) # MPModelClass;
- (Class)MPModelClass;
- (Class)classForRelationshipKey:;
- (void).cxx_destruct;
- (id)prepareSource:context:properties:;
- (id)description;
- (id)initWithMPModelClass:;
- (void)setSourcePreprocessorBlock:;
- (void)mapUnsupportedPropertyKey:;
- (void)mapUnsupportedRelationshipKey:;
- (id)_objectForPropertySet:source:context:;
- (id)_objectForRelationshipKey:propertySet:source:context:;
- (id)_valueForPropertyKey:source:context:;
+ (id)translatorForMPModelClass:;
+ (void)buildSchemaIfNeeded;
+ (id)createTranslatorForMPModelClass:;
@end
