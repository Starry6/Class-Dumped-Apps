@interface TKTokenSessionConnection : NSObject
@property (nonatomic) TKTokenConnection tokenConnection;
@property (nonatomic) NSMutableDictionary sessions;
@property (nonatomic) NSMutableDictionary initialKeepAlives;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sessions;
- (id)tokenConnection;
- (void).cxx_destruct;
- (void)startSessionWithLAContext:parameters:reply:;
- (void)session:getAdvertisedItemsWithReply:;
- (void)session:evaluateAccessControl:forOperation:reply:;
- (void)session:getAttributesOfObjectID:reply:;
- (void)session:objectID:operation:data:algorithms:parameters:reply:;
- (void)session:createObjectWithAttributes:reply:;
- (void)session:deleteObjectWithObjectID:reply:;
- (void)endSession:reply:;
- (id)initWithTokenConnection:;
- (void)withSessionID:invoke:;
- (id)initialKeepAlives;
@end
