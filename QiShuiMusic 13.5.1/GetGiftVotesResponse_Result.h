@interface GetGiftVotesResponse_Result : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) q count;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q giftId;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
