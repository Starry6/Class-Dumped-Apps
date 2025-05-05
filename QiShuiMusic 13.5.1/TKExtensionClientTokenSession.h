@interface TKExtensionClientTokenSession : TKClientTokenSession
@property (nonatomic) NSNumber sessionID;
- (id)initWithToken:LAContext:parameters:error:;
- (void)terminate;
- (id)sessionID;
- (id)certificates;
- (id)keys;
- (void)dealloc;
- (id)objectForObjectID:error:;
- (id)identities;
- (id)itemsOfClass:;
- (BOOL)isValidWithError:;
- (BOOL)ensureSessionWithClient:connectionIdentifier:error:;
- (id)withError:accessControl:invoke:;
- (BOOL)evaluateAccessControl:forOperation:error:;
- (id)advertisedItems;
- (void).cxx_destruct;
- (id)createObjectWithAttributes:error:;
@end
