@interface AFCallSiteInfo : NSObject
@property (nonatomic) NSString imagePath;
@property (nonatomic) NSString symbolName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imagePath;
- (id)symbolName;
- (id)init;
- (id)initWithImagePath:symbolName:;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:;
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
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
