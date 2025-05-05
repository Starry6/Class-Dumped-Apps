@interface IESLiveInnerPbAudioChatMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString content;
@property (nonatomic) NSString audioURL;
@property (nonatomic) q audioDuration;
+ (id)descriptor;
@end
