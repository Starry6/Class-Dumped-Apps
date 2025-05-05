@interface HTSLiveLinkmicGameBarrageStartContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicGameInfo gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (nonatomic) NSString audienceToast;
@property (nonatomic) GPBInt64Array kickOutUserIdsArray;
@property (nonatomic) Q kickOutUserIdsArray_Count;
@property (nonatomic) q targetUiLayout;
+ (id)descriptor;
@end
