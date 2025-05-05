@interface CKAPSMachServiceConnectionKey : NSObject
@property (nonatomic) NSString environmentName;
@property (nonatomic) NSString namedDelegatePort;
- (unsigned long long)hash;
- (id)initWithEnvironmentName:namedDelegatePort:;
- (void).cxx_destruct;
- (id)namedDelegatePort;
- (BOOL)isEqual:;
- (id)environmentName;
- (id)copyWithZone:;
@end
