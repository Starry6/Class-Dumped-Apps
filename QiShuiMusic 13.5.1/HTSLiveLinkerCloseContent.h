@interface HTSLiveLinkerCloseContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger source;
@property (nonatomic) IESLiveBanUser banAnchorInfo;
@property (nonatomic) BOOL hasBanAnchorInfo;
@property (nonatomic) NSInteger reason;
+ (id)descriptor;
@end
