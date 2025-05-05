@interface STVersionVector : NSObject
@property (nonatomic) NSMutableDictionary nodeByIdentifier;
@property (nonatomic) NSString editorIdentifier;
@property (nonatomic) NSArray nodes;
@property (nonatomic) NSData dataRepresentation;
- (id)init;
- (id)initWithDataRepresentation:;
- (id)debugDescription;
- (id)nodes;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)description;
- (id)dataRepresentation;
- (id)copyWithZone:;
- (void)join:;
- (unsigned long long)evaluateCausality:;
- (void)incrementNodeWithIdentifier:;
- (BOOL)precedesVersionVector:;
- (BOOL)isConcurrentWithVersionVector:;
- (BOOL)isEqualToVersionVector:;
- (id)nodeByIdentifier;
- (void)setNodeByIdentifier:;
- (id)editorIdentifier;
- (void)setEditorIdentifier:;
@end
