@interface CLSContextNavigationNode : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString childObjectID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithParentContextID:childContextID:;
- (id)childObjectID;
- (void)setChildObjectID:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)objectIDForParentContextID:andChildContextID:;
@end
