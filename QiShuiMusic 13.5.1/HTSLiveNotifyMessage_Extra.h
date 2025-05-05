@interface HTSLiveNotifyMessage_Extra : IESLivePBBaseMessage
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveNotifyMessage_Background background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) HTSLiveNotifyMessage_ContentList contentList;
@property (nonatomic) BOOL hasContentList;
@property (nonatomic) NSMutableDictionary params;
@property (nonatomic) Q params_Count;
@property (nonatomic) BOOL needGiftFrequency;
+ (id)descriptor;
@end
