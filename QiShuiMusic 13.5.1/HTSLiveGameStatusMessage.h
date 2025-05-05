@interface HTSLiveGameStatusMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q gameId;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString configExtra;
+ (id)descriptor;
@end
