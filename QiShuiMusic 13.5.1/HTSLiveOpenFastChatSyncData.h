@interface HTSLiveOpenFastChatSyncData : IESLivePBBaseMessage
@property (nonatomic) NSInteger chatSupportType;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString hint;
@property (nonatomic) NSMutableArray fastChatArray;
@property (nonatomic) Q fastChatArray_Count;
@property (nonatomic) NSString color;
@property (nonatomic) BOOL fastChatSwitch;
+ (id)descriptor;
@end
