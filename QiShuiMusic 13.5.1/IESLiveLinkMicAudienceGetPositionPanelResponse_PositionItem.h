@interface IESLiveLinkMicAudienceGetPositionPanelResponse_PositionItem : IESLivePBBaseMessage
@property (nonatomic) BOOL used;
@property (nonatomic) BOOL locked;
@property (nonatomic) NSString openId;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL isEnlarged;
+ (id)descriptor;
@end
