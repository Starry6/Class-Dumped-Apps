@interface HTSLiveKTVShortVideoCreatedMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveKTVShortVideoCreatedMessage_ShortVideoStruct shortVideoInfo;
@property (nonatomic) BOOL hasShortVideoInfo;
+ (id)descriptor;
@end
