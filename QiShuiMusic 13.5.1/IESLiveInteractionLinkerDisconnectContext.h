@interface IESLiveInteractionLinkerDisconnectContext : NSObject
@property (nonatomic) <IESLiveLinkmicLinkParams> linkParams;
@property (nonatomic) q reason;
@property (nonatomic) BOOL hasLeaveContext;
@property (nonatomic) <IESLiveInteractionLinkerLeaveContextProtocol> leaveContext;
@property (nonatomic) BOOL hasCloseContext;
@property (nonatomic) <IESLiveInteractionLinkerCloseContextProtocol> closeContext;
@property (nonatomic) BOOL hasKickoutContext;
@property (nonatomic) <IESLiveInteractionLinkerKickoutContextProtocol> kickoutContext;
@property (nonatomic) NSObject rawData;
@property (nonatomic) NSString promptString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasCloseContext;
- (BOOL)hasLeaveContext;
- (id)closeContext;
- (BOOL)hasKickoutContext;
- (id)initWithInteractionLinkerContext:reason:;
- (id)kickoutContext;
- (id)leaveContext;
- (long long)reason;
- (void).cxx_destruct;
- (id)rawData;
- (id)linkParams;
- (id)promptString;
- (void)setLinkParams:;
@end
