@interface GEOMessage : NSObject
@property (nonatomic) NSString messageName;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) GEOPeer peer;
@property (nonatomic) GEOApplicationAuditToken preferredAuditToken;
@property (nonatomic) GEODataRequestThrottlerToken throttleToken;
- (void)sendReply:;
- (id)init;
- (id)peer;
- (id)initWithXPCMessage:peer:;
- (id)userInfo;
- (id)throttleToken;
- (void).cxx_destruct;
- (id)messageName;
- (id)preferredAuditToken;
- (void)sendReplyWithXPCUserInfo:;
@end
