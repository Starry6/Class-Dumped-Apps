@interface GroupVoteGiftMeta : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
