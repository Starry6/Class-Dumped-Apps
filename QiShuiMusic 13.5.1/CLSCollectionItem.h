@interface CLSCollectionItem : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSString referenceObjectID;
@property (nonatomic) Q displayOrder;
- (void)setType:;
- (void)setDisplayOrder:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (unsigned long long)displayOrder;
- (id)initWithType:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithHandout:;
- (id)initWithQuestionStep:;
- (void)setReferenceObjectID:;
- (id)referenceObjectID;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
