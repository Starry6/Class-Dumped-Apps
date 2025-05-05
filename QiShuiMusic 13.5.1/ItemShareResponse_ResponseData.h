@interface ItemShareResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) HTSLiveShareItemStyle itemStyle;
@property (nonatomic) BOOL hasItemStyle;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) q msgId;
+ (id)descriptor;
@end
