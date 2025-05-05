@interface FBWorkspaceConnectionsState : NSObject
@property (nonatomic) Q serializedDataLength;
@property (nonatomic) NSSet processIdentifiers;
- (id)init;
- (id)copy;
- (unsigned long long)hash;
- (id)mutableCopy;
- (void).cxx_destruct;
- (unsigned long long)serializedDataLength;
- (id)processIdentifiers;
- (id)description;
- (id)_initWithIndexSet:;
- (long long)serializeToWriter:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (unsigned long long)minimumSerializedDataLength;
+ (id)deserializeLength:fromReader:;
@end
