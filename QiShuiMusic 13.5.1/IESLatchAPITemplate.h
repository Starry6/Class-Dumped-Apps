@interface IESLatchAPITemplate : NSObject
@property (nonatomic) NSMutableDictionary apis;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiNodeForName:;
- (void)addAPINode:;
- (id)apis;
- (id)buildParamsOfNode:withSchema:variables:globalProps:percentEscapes:;
- (unsigned long long)countOfNodes;
- (id)paramsOfNode:withSchema:variables:globalProps:percentEscapes:;
- (id)paramsOfValue:dataType:;
- (void)setApis:;
- (id)jsonRepresentation;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
@end
