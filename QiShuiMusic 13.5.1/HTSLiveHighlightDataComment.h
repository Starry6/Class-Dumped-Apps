@interface HTSLiveHighlightDataComment : IESLivePBBaseMessage
@property (nonatomic) NSString scene;
@property (nonatomic) q chatId;
@property (nonatomic) NSString content;
@property (nonatomic) NSString nickName;
@property (nonatomic) q commenterId;
@property (nonatomic) q msgId;
@property (nonatomic) q preId;
@property (nonatomic) HTSLivePinCommon pinCommon;
@property (nonatomic) BOOL hasPinCommon;
+ (id)descriptor;
@end
