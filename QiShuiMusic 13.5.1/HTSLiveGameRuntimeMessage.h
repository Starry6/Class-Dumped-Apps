@interface HTSLiveGameRuntimeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger runtimeType;
@property (nonatomic) NSString roomId;
@property (nonatomic) q gameId;
@property (nonatomic) NSString appId;
@property (nonatomic) q linkGameId;
@property (nonatomic) NSString gameExtra;
+ (id)descriptor;
@end
