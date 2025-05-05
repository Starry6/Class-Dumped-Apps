@interface ShowChatResponse_LandscapeAreaCommon : IESLivePBBaseMessage
@property (nonatomic) BOOL showHead;
@property (nonatomic) BOOL showNickname;
@property (nonatomic) BOOL showFontColor;
@property (nonatomic) GPBInt32Array commentTypeTagsArray;
@property (nonatomic) Q commentTypeTagsArray_Count;
+ (id)descriptor;
@end
