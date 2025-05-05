@interface IESLiveSaaSPBCommonBubbleConfig : GPBMessage
@property (nonatomic) NSString content;
@property (nonatomic) q duration;
@property (nonatomic) IESLiveSaaSPBText richText;
@property (nonatomic) BOOL hasRichText;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) IESLiveSaaSPBFlexImageStruct backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) IESLiveSaaSPBImage arrowImage;
@property (nonatomic) BOOL hasArrowImage;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger arrowPosition;
+ (id)descriptor;
@end
