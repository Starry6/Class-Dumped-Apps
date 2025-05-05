@interface CKXAtomORCSchemaFormatVersionORC : NSObject
@property (nonatomic) CKXAtomBindingImplementation binding;
- (void).cxx_destruct;
- (id)initWithBinding:;
- (id)binding;
- (id)generateSchema;
- (void)configureColumnsWithRootColumn:;
- (unsigned long long)topLevelIndexForStruct:;
- (unsigned long long)structReferenceIndexForReference:;
- (unsigned long long)listColumnIndexForReference:;
- (unsigned long long)valueColumnIndexForField:;
@end
