@interface HTSLiveBattleToastMessage_UIConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveBattleToastMessage_Text content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSString schema;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveBattleToastMessage_Text iconText;
@property (nonatomic) BOOL hasIconText;
@property (nonatomic) NSMutableArray uiItemListArray;
@property (nonatomic) Q uiItemListArray_Count;
+ (id)descriptor;
@end
