@interface IESLiveLinkmicLinkAudienceMessage : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveLinkmicLinkMessageDelegate> delegate;
@property (nonatomic) Q scene;
@property (nonatomic) Q fallBackScene;
- (BOOL)isValidByScene:;
- (unsigned long long)fallBackScene;
- (void)handleLinkMessage:;
- (void)handlerLinkMicMethod:;
- (id)initWithRoom:scene:;
- (BOOL)isVaildByUILayout:;
- (BOOL)isValidByFallbackScene:;
- (void)registMessage;
- (id)roomModel;
- (void)setFallBackScene:;
- (void)setRoomModel:;
- (void)setScene:;
- (void)setDelegate:;
- (unsigned long long)scene;
- (id)delegate;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
