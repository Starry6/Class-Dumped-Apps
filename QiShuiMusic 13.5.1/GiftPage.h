@interface GiftPage : IESLivePBBaseMessage
@property (nonatomic) NSInteger pageType;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) BOOL display;
@property (nonatomic) HTSLiveGiftPanelOperation pageOperation;
@property (nonatomic) BOOL hasPageOperation;
@property (nonatomic) NSString eventName;
@property (nonatomic) HTSLiveImage backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) PageInfo pageInfo;
@property (nonatomic) BOOL hasPageInfo;
@property (nonatomic) HTSLiveImage multipleSelectedReceiverImage;
@property (nonatomic) BOOL hasMultipleSelectedReceiverImage;
@property (nonatomic) NSMutableArray sectionInfoArray;
@property (nonatomic) Q sectionInfoArray_Count;
@property (nonatomic) PageNameStyleInfo pageNameStyleInfo;
@property (nonatomic) BOOL hasPageNameStyleInfo;
@property (nonatomic) NSMutableArray remainingGiftsArray;
@property (nonatomic) Q remainingGiftsArray_Count;
+ (id)descriptor;
@end
