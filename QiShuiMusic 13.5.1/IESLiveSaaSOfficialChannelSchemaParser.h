@interface IESLiveSaaSOfficialChannelSchemaParser : NSObject
@property (nonatomic) <IESLiveSaaSContainerRouter> containerRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerRouter;
- (void)fetchOfficialChannelRoomWithUID:callback:;
- (void)handleActionsAfterEnterRoomWithParameter:;
- (void)openRoom:parameter:completion:;
- (void)p_parseRoomWithRoomID:anchorID:parameter:completion:;
- (void)parseWithParams:fromInside:completion:;
- (void)setContainerRouter:;
- (void).cxx_destruct;
+ (void)ieslivekit_register_schema;
@end
