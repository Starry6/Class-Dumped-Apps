@interface IESLiveSaaSPBGiftBanner : GPBMessage
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString displayTextBgColor;
@property (nonatomic) IESLiveSaaSPBImage boxImg;
@property (nonatomic) BOOL hasBoxImg;
@property (nonatomic) IESLiveSaaSPBImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) BOOL animate;
@property (nonatomic) q boxId;
@property (nonatomic) q availableBoxCount;
+ (id)descriptor;
@end
