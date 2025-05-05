@interface HTSLivePanelData_Item : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString iconURL;
@property (nonatomic) BOOL isNewArrival;
@property (nonatomic) NSString detailContent;
@property (nonatomic) q received;
@property (nonatomic) q left;
@property (nonatomic) q endTime;
@property (nonatomic) NSString prizeId;
@property (nonatomic) q receiveCondition;
@property (nonatomic) q bonusType;
@property (nonatomic) HTSLiveImage giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) NSString giftScriptTitle;
@property (nonatomic) NSString giftScriptContent;
@property (nonatomic) NSMutableArray emojiArray;
@property (nonatomic) Q emojiArray_Count;
@property (nonatomic) GPBInt64Array emojiScaleArray;
@property (nonatomic) Q emojiScaleArray_Count;
@property (nonatomic) NSString headerImg;
+ (id)descriptor;
@end
