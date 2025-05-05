@interface PropConsumeResult_Data : IESLivePBBaseMessage
@property (nonatomic) NSString msgId;
@property (nonatomic) q fanTicketCount;
@property (nonatomic) NSString describe;
@property (nonatomic) q giftId;
@property (nonatomic) q groupCount;
@property (nonatomic) q leftDiamond;
@property (nonatomic) BOOL result;
@property (nonatomic) q repeatCount;
@property (nonatomic) q comboCount;
@property (nonatomic) q propDefId;
@property (nonatomic) q propType;
@property (nonatomic) NSMutableArray propsArray;
@property (nonatomic) Q propsArray_Count;
@property (nonatomic) q isAwemeFreeGift;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSMutableArray giftsArray;
@property (nonatomic) Q giftsArray_Count;
@property (nonatomic) q groupId;
@property (nonatomic) HTSLiveGiftStruct gift;
@property (nonatomic) BOOL hasGift;
@property (nonatomic) q clientGiftSource;
+ (id)descriptor;
@end
