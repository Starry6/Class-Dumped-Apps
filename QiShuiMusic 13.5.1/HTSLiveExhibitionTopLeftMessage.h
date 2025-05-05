@interface HTSLiveExhibitionTopLeftMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString topTitle;
@property (nonatomic) HTSLiveImage giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) NSString exhibitionEntranceURL;
+ (id)descriptor;
@end
