@interface HTSLiveGiftMarketingInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSMutableArray mainTitleArray;
@property (nonatomic) Q mainTitleArray_Count;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString subTitleSchema;
@property (nonatomic) NSInteger leftCount;
@property (nonatomic) HTSLiveGiftMarketingBtn giftMarketingButton;
@property (nonatomic) BOOL hasGiftMarketingButton;
@property (nonatomic) NSInteger buffMergeType;
@property (nonatomic) NSString marketingType;
@property (nonatomic) HTSLiveImage mainTitleImg;
@property (nonatomic) BOOL hasMainTitleImg;
@property (nonatomic) HTSLiveImage jumpIcon;
@property (nonatomic) BOOL hasJumpIcon;
@property (nonatomic) NSString mainTitleAfterMission;
@property (nonatomic) NSString subMarketingType;
+ (id)descriptor;
@end
