@interface HTSLiveLiuYanDress : IESLivePBBaseMessage
@property (nonatomic) q dressId;
@property (nonatomic) q entityId;
@property (nonatomic) NSInteger dressType;
@property (nonatomic) NSInteger paidType;
@property (nonatomic) NSString dressName;
@property (nonatomic) HTSLiveImage dressImage;
@property (nonatomic) BOOL hasDressImage;
@property (nonatomic) HTSLiveImage badgeMiniIcon;
@property (nonatomic) BOOL hasBadgeMiniIcon;
@property (nonatomic) NSString dressColor;
@property (nonatomic) NSInteger hasPaid;
@property (nonatomic) NSString badgeDetailInfo;
@property (nonatomic) HTSLiveTicketSimpleInfo ticketInfo;
@property (nonatomic) BOOL hasTicketInfo;
+ (id)descriptor;
@end
