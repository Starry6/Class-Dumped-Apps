@interface NEFlowDivertFileHandle : NEFileHandle
@property (nonatomic) NSNumber controlUnit;
@property (nonatomic) NSData keyMaterial;
- (id)dictionary;
- (id)initFlowDivertControlSocketDisableAppMap:;
- (id)initFlowDivertDataSocket;
- (unsigned long long)type;
- (id)initFlowDivertControlSocket;
- (void).cxx_destruct;
- (id)initFromDictionary:;
- (id)description;
- (id)controlUnit;
- (id)keyMaterial;
@end
