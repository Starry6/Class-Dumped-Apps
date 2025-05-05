@interface BattleSelfData : IESLivePBBaseMessage
@property (nonatomic) q pkDurationTime;
@property (nonatomic) NSInteger valueType;
@property (nonatomic) q likeType;
@property (nonatomic) q giftValueType;
@property (nonatomic) q giftUvType;
@property (nonatomic) q ticketType;
@property (nonatomic) NSString setUid;
@property (nonatomic) q subscribeType;
@property (nonatomic) NSInteger pkValueType;
+ (id)descriptor;
@end
