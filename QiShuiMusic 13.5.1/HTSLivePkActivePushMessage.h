@interface HTSLivePkActivePushMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLivePkActivePush pkActivePush;
@property (nonatomic) BOOL hasPkActivePush;
+ (id)descriptor;
@end
