@interface IESECShopTabBadgeInfo : MTLModel
@property (nonatomic) Q badgeType;
@property (nonatomic) NSString badgeMessage;
@property (nonatomic) Q badgeIconType;
@property (nonatomic) IESECURLModel badgeIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)badgeIcon;
- (unsigned long long)badgeIconType;
- (id)badgeMessage;
- (void)setBadgeIcon:;
- (void)setBadgeIconType:;
- (void)setBadgeMessage:;
- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (void)setBadgeType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
