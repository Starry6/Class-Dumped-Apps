@interface SASProximityHandshakeAction : SASProximityAction
@property (nonatomic) SASProximityHandshake handshake;
- (id)init;
- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)responsePayload;
- (id)handshake;
- (void)setResponseFromData:;
- (void)setHandshake:;
+ (unsigned long long)actionID;
@end
