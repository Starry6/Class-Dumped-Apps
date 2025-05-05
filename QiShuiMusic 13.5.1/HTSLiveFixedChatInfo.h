@interface HTSLiveFixedChatInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage panelBg;
@property (nonatomic) HTSLiveImage contentDefault;
@property (nonatomic) HTSLiveImage contentSelected;
@property (nonatomic) HTSLiveImage panelHead;
@property (nonatomic) NSMutableArray fixedChatListArray;
@property (nonatomic) Q fixedChatListArray_Count;
@property (nonatomic) NSMutableArray fixedEmojiListArray;
@property (nonatomic) Q fixedEmojiListArray_Count;
@property (nonatomic) NSString titleColor;
@property (nonatomic) NSString textDefaultColor;
@property (nonatomic) NSString textSelectedColor;
@property (nonatomic) HTSLiveImage cancelIcon;
@property (nonatomic) BOOL hasCancelIcon;
- (id)contentSelected;
- (id)panelBg;
- (id)contentDefault;
- (BOOL)isHasEmojiData;
- (id)panelHead;
- (void)preloadSkinImage;
- (void)setContentDefault:;
- (void)setContentSelected:;
- (void)setPanelBg:;
- (void)setPanelHead:;
- (void)loadData:;
+ (id)descriptor;
@end
