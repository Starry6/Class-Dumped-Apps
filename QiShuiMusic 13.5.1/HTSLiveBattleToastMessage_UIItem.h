@interface HTSLiveBattleToastMessage_UIItem : IESLivePBBaseMessage
@property (nonatomic) NSInteger uiType;
@property (nonatomic) HTSLiveBattleToastMessage_Text content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSString schema;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveBattleToastMessage_Text iconText;
@property (nonatomic) BOOL hasIconText;
@property (nonatomic) NSString webpURL;
+ (id)descriptor;
@end
