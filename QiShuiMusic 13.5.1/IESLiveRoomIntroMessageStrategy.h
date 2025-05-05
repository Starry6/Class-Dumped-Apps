@interface IESLiveRoomIntroMessageStrategy : IESLiveMessageNodeStrategy
- (BOOL)doFilterForMessageList:;
- (id)innerViewSizeWithMaxLayoutWidth:node:;
- (id)jointAttributedString:;
- (BOOL)liveRoomIntroMessageCanPin;
- (long long)liveRoomIntroMessageNeedShowDuration;
- (long long)liveRoomIntroMessagePinDismissType;
- (long long)liveRoomIntroMessagePinShowDuration;
- (long long)liveRoomIntroMessagePinShowStyle;
- (BOOL)liveRoomIntroMessageShowEnable;
- (BOOL)needHandleAttributedStringForMessage:;
- (void)processRoomIntroSpecialLabel:;
- (id)replaceLabelIconURL:withLastPath:;
- (void)updateNode:withMessage:;
- (void)updateNodeOnCreated:;
@end
