@interface AFTestRequestOptions : NSObject
@property (nonatomic) q requestPath;
@property (nonatomic) NSString inputOrigin;
@property (nonatomic) NSNumber isEyesFree;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRequestPath:inputOrigin:isEyesFree:;
- (long long)requestPath;
- (id)inputOrigin;
- (id)isEyesFree;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
