@interface HTSLiveLinkmicProfitEggMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) IESLiveLinkmicProfitRoomEggInfo eggInfo;
@property (nonatomic) BOOL hasEggInfo;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveLinkmicProfitEggContributeContent contributeContent;
+ (id)descriptor;
@end
