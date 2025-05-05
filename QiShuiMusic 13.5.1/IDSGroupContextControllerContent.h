@interface IDSGroupContextControllerContent : NSObject
@property (nonatomic) IDSCloudKitContainer cloudKitContainer;
@property (nonatomic) ENGroupContext groupContext;
@property (nonatomic) ENAccountIdentity accountIdentity;
- (id)cloudKitContainer;
- (void).cxx_destruct;
- (void)setCloudKitContainer:;
- (id)groupContext;
- (id)accountIdentity;
- (void)setGroupContext:;
- (void)setAccountIdentity:;
@end
