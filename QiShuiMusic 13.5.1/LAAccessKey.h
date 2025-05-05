@interface LAAccessKey : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) LAACL acl;
- (id)identifier;
- (id)acl;
- (void).cxx_destruct;
- (id)initWithKey:;
- (BOOL)isEqual:;
- (id)initWithACL:;
- (void)armInContext:completion:;
- (void)armInContext:options:completion:;
- (void)unlockKey:inContext:userInfo:completion:;
@end
