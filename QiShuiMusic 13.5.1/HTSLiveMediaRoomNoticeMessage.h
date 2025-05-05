@interface HTSLiveMediaRoomNoticeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString intro;
@property (nonatomic) q duration;
@property (nonatomic) BOOL reviewPass;
@property (nonatomic) NSString reviewFailText;
@property (nonatomic) NSString noticeTitle;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
