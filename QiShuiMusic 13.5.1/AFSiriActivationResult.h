@interface AFSiriActivationResult : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (long long)actionType;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithActionType:error:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
