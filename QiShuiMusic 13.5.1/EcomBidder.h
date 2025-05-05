@interface EcomBidder : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) EcomAvatar avatar;
@property (nonatomic) BOOL hasAvatar;
+ (id)descriptor;
@end
