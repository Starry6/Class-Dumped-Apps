@interface VSOptional : NSObject
@property (nonatomic) @ object;
- (void)setObject:;
- (id)init;
- (void)conditionallyUnwrapObject:otherwise:;
- (void)conditionallyUnwrapObject:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (id)unwrapWithFallback:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
- (id)forceUnwrapObject;
- (id)description;
- (BOOL)isEqual:;
+ (id)optionalWithObject:;
+ (BOOL)supportsSecureCoding;
+ (id)decodableClasses;
@end
