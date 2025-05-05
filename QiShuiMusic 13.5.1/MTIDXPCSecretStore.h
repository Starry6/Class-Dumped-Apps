@interface MTIDXPCSecretStore : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)debugInfo;
- (id)setupXPCConnection;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)newXPCConnection;
- (id)maintainSchemes:options:;
- (id)secretForScheme:options:;
- (id)resetSchemes:options:;
- (void)clearLocalData;
- (id)syncForSchemes:options:;
@end
