@interface IDSGroupSessionKeyValueDeliveryHandlerProxy : NSObject
@property (nonatomic) NSUUID handlerUUID;
@property (nonatomic) <IDSGroupSessionKeyValueDeliveryHandler> handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHandler:;
- (void)setHandler:;
- (id)handlerUUID;
- (id)handler;
- (void).cxx_destruct;
- (void)handleGroupSessionKeyValues:;
- (void)setHandlerUUID:;
@end
