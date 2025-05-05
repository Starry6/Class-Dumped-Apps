@interface IESBridgeMethod : NSObject
@property (nonatomic) Q authType;
@property (nonatomic) NSString methodName;
@property (nonatomic) NSString methodNamespace;
@property (nonatomic) @? handler;
- (id)methodNamespace;
- (id)initWithMethodName:methodNamespace:authType:handler:;
- (unsigned long long)authType;
- (id)handler;
- (void).cxx_destruct;
- (id)methodName;
@end
