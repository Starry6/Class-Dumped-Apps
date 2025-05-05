@interface TKSEPClientTokenSession : TKClientTokenSession
@property (nonatomic) TKTokenID tokenID;
- (id)initWithToken:LAContext:parameters:error:;
- (id)objectForObjectID:error:;
- (id)tokenID;
- (id)createObjectWithAttributes:error:;
@end
