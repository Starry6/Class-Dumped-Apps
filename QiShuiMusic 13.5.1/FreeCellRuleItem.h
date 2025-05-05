@interface FreeCellRuleItem : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString gapDesc;
@property (nonatomic) HTSLiveImage descIcon;
@property (nonatomic) BOOL hasDescIcon;
@property (nonatomic) q group;
@property (nonatomic) HTSLiveImage giftLabelIcon;
@property (nonatomic) BOOL hasGiftLabelIcon;
+ (id)descriptor;
@end
