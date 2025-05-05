@interface SALogSignatureWithABC : SABaseClientBoundCommand
@property (nonatomic) NSString subType;
@property (nonatomic) NSDictionary subTypeContext;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)subType;
- (void)setSubType:;
- (id)subTypeContext;
- (void)setSubTypeContext:;
+ (id)logSignatureWithABC;
+ (id)logSignatureWithABCWithDictionary:context:;
@end
