@interface HTSLiveAnchorUpdateLayoutContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixUpdateUserId;
@property (nonatomic) NSString mixOperatorId;
@property (nonatomic) NSInteger layoutType;
@property (nonatomic) NSString updateOpenUserId;
@property (nonatomic) NSInteger anchorUiLayout;
@property (nonatomic) NSInteger anchorLayoutRange;
@property (nonatomic) NSString operatorOpenId;
- (id)mixUpdateUserId;
- (id)mixOperatorId;
+ (id)descriptor;
@end
