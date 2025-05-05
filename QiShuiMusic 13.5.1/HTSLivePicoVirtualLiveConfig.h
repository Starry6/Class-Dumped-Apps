@interface HTSLivePicoVirtualLiveConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLivePanelConfig panelConfig;
@property (nonatomic) BOOL hasPanelConfig;
@property (nonatomic) NSMutableArray emojiTabArray;
@property (nonatomic) Q emojiTabArray_Count;
+ (id)descriptor;
@end
