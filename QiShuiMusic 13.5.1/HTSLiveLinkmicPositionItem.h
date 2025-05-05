@interface HTSLiveLinkmicPositionItem : IESLivePBBaseMessage
@property (nonatomic) q position;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString activeName;
@property (nonatomic) NSInteger verifyStatus;
@property (nonatomic) NSInteger positionType;
@property (nonatomic) q clientUiPosition;
+ (id)descriptor;
@end
