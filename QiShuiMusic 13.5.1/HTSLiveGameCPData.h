@interface HTSLiveGameCPData : IESLivePBBaseMessage
@property (nonatomic) NSInteger isLiveAPromotedA;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString gameName;
+ (id)descriptor;
@end
