@interface TKClientTokenObject : NSObject
@property (nonatomic) TKClientTokenSession session;
@property (nonatomic) NSData objectID;
@property (nonatomic) NSData accessControl;
@property (nonatomic) ^{__SecAccessControl=} accessControlRef;
@property (nonatomic) NSData value;
@property (nonatomic) NSData publicKey;
@property (nonatomic) NSDictionary keychainAttributes;
- (id)objectID;
- (id)accessControl;
- (id)publicKey;
- (id)accessControlRef;
- (BOOL)commitKeyWithError:;
- (id)operationResult:error:;
- (id)attestKey:nonce:error:;
- (id)keychainAttributes;
- (id)session;
- (id)sign:algorithms:parameters:error:;
- (void).cxx_destruct;
- (id)operation:data:algorithms:parameters:error:;
- (id)initWithSession:objectID:attributes:;
- (BOOL)deleteWithError:;
- (id)exchangeKey:algorithms:parameters:error:;
- (id)value;
- (id)decrypt:algorithms:parameters:error:;
- (BOOL)bumpKeyWithError:;
@end
