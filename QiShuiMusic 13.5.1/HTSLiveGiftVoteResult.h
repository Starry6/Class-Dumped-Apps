@interface HTSLiveGiftVoteResult : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) q count;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q giftId;
@property (nonatomic) NSString name;
@property (nonatomic) q diamondCount;
@property (nonatomic) q giftType;
@property (nonatomic) NSString countStr;
+ (id)descriptor;
@end
