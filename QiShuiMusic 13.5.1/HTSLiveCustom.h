@interface HTSLiveCustom : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) q endTime;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q total;
@property (nonatomic) q left;
@property (nonatomic) q canModifyTime;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString prizeId;
@property (nonatomic) NSString templateId;
@property (nonatomic) q receiveCondition;
@property (nonatomic) NSString detailContent;
@property (nonatomic) q giftId;
@property (nonatomic) HTSLiveImage giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) q createTime;
@property (nonatomic) q bonusType;
+ (id)descriptor;
@end
