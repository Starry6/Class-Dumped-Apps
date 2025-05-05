@interface IESLiveAioLinkMethodModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString routerName;
@property (nonatomic) NSString protocolName;
@property (nonatomic) NSString methodName;
@property (nonatomic) NSArray paramsNames;
@property (nonatomic) NSString methodType;
@property (nonatomic) NSString selectorName;
@property (nonatomic) NSString returnName;
@property (nonatomic) NSMethodSignature signature;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)routerName;
- (void)setRouterName:;
- (void)setSignature:;
- (id)signature;
- (id)protocolName;
- (void).cxx_destruct;
- (void)setProtocolName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
