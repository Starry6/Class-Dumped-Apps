@interface IESLiveSaaSPBAPIGiftPage : GPBMessage
@property (nonatomic) NSInteger pageType;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) BOOL display;
@property (nonatomic) NSString eventName;
@property (nonatomic) IESLiveSaaSPBImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) IESLiveSaaSPBImage multipleSelectedReceiverImage;
@property (nonatomic) BOOL hasMultipleSelectedReceiverImage;
+ (id)descriptor;
@end
