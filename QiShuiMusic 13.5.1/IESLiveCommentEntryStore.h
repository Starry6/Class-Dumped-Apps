@interface IESLiveCommentEntryStore : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableCommentByWrds;
@property (nonatomic) BOOL disableInputComment;
@property (nonatomic) NSString disableInputCommentHint;
@property (nonatomic) HTSLiveFixedChatSyncData fixedChatData;
@property (nonatomic) HTSLiveFastChatSyncData fastChatData;
@property (nonatomic) BOOL isDanmakuClosed;
@property (nonatomic) <IESLiveCommentEntryReactions> reactions;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) q orientation;
@property (nonatomic) IESLivePublicScreenInfoModel publicScreenInfoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDanmakuClosed;
- (BOOL)convergedModule;
- (void)checkIfDisableComment;
- (void)checkIfDisableInputComment;
- (BOOL)commentEntryEmojiEnableShow;
- (id)commentEntryTitle;
- (BOOL)disableComment;
- (BOOL)disableCommentByWrds;
- (BOOL)disableInputComment;
- (id)disableInputCommentHint;
- (id)fastChatData;
- (id)fixedChatData;
- (void)handleQuickCommentWithData:;
- (void)handleQuickLimitCommentWithData:;
- (id)initWithRoomModel:diContext:;
- (id)publicScreenInfoModel;
- (id)roomModel;
- (void)setDisableComment:;
- (void)setDisableCommentByWrds:;
- (void)setDisableInputComment:;
- (void)setDisableInputCommentHint:;
- (void)setFastChatData:;
- (void)setFixedChatData:;
- (void)setIsDanmakuClosed:;
- (void)setIsDanmakuClosedStatus:;
- (void)setPublicScreenInfoModel:;
- (void)setRoomModel:;
- (void)setTrackContext:;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)subscribedSyncDataWithValue:version:;
- (id)trackContext;
- (long long)orientation;
- (void)setup;
- (void).cxx_destruct;
- (void)setOrientation:;
- (void)messageReceived:;
- (id)reactions;
- (void)setReactions:;
@end
