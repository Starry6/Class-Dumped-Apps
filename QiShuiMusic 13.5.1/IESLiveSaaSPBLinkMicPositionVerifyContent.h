@interface IESLiveSaaSPBLinkMicPositionVerifyContent : GPBMessage
@property (nonatomic) q currentVerifyPosition;
@property (nonatomic) NSMutableArray verifyPositionItemsArray;
@property (nonatomic) Q verifyPositionItemsArray_Count;
@property (nonatomic) NSMutableArray finalPositionItemsArray;
@property (nonatomic) Q finalPositionItemsArray_Count;
+ (id)descriptor;
@end
