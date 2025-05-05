@interface BSMachServiceAliases : NSObject
@property (nonatomic) NSDictionary environmentRepresentation;
- (id)init;
- (id)copy;
- (id)environmentRepresentation;
- (unsigned long long)hash;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)resolveMachService:;
- (id)copyWithZone:;
+ (id)environmentAliases;
@end
