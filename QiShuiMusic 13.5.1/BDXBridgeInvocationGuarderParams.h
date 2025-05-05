@interface BDXBridgeInvocationGuarderParams : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) Q engineType;
@property (nonatomic) NSString containerID;
@property (nonatomic) NSString namespace;
@property (nonatomic) NSString methodName;
- (id)urlString;
- (id)containerID;
- (void)setContainerID:;
- (id)namespace;
- (void)setNamespace:;
- (unsigned long long)engineType;
- (void).cxx_destruct;
- (void)setUrlString:;
- (void)setEngineType:;
- (id)methodName;
- (void)setMethodName:;
@end
