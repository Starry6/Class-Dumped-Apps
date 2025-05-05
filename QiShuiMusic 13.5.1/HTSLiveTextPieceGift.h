@interface HTSLiveTextPieceGift : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) HTSLivePatternRef nameRef;
@property (nonatomic) BOOL hasNameRef;
+ (id)descriptor;
@end
