@interface HTSLiveCommonBubbleConfig : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveText richText;
@property (nonatomic) BOOL hasRichText;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) HTSLiveFlexImageStruct backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) HTSLiveImage arrowImage;
@property (nonatomic) BOOL hasArrowImage;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger arrowPosition;
+ (id)descriptor;
@end
