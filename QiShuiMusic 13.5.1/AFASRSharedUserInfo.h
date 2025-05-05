@interface AFASRSharedUserInfo : NSObject
@property (nonatomic) NSString sharedUserId;
@property (nonatomic) NSString loggableSharedUserId;
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
- (id)initWithSharedUserId:loggableSharedUserId:;
- (id)sharedUserId;
- (id)loggableSharedUserId;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
