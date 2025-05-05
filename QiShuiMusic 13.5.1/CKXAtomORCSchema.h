@interface CKXAtomORCSchema : NSObject
@property (nonatomic) <CKXORCHelpers> implementation;
- (id)implementation;
- (void).cxx_destruct;
- (id)generateSchema;
- (void)configureColumnsWithRootColumn:;
- (unsigned long long)topLevelIndexForStruct:;
- (unsigned long long)structReferenceIndexForReference:;
- (unsigned long long)listColumnIndexForReference:;
- (unsigned long long)valueColumnIndexForField:;
- (id)initWithBinding:formatVersion:;
@end
