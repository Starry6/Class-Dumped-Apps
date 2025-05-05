@interface IESLiveSaaSPBMediaRoomNoticeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString intro;
@property (nonatomic) q duration;
@property (nonatomic) BOOL reviewPass;
@property (nonatomic) NSString reviewFailText;
@property (nonatomic) NSString noticeTitle;
+ (id)descriptor;
@end
