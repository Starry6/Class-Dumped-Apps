@interface IESLiveSaaSPBPropBill : GPBMessage
@property (nonatomic) q type;
@property (nonatomic) NSString definitionName;
@property (nonatomic) IESLiveSaaSPBImage definitionIcon;
@property (nonatomic) BOOL hasDefinitionIcon;
@property (nonatomic) q definitionType;
@property (nonatomic) NSString billNo;
@property (nonatomic) q count;
@property (nonatomic) q billCount;
@property (nonatomic) q billTime;
@property (nonatomic) NSString toUserNickname;
@property (nonatomic) IESLiveSaaSPBImage toUserAvatar;
@property (nonatomic) BOOL hasToUserAvatar;
@property (nonatomic) NSString toOpenid;
+ (id)descriptor;
@end
