@interface HTSLiveAppearance_Bubble : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) NSMutableArray rollTipsArray;
@property (nonatomic) Q rollTipsArray_Count;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSInteger rollAfterMs;
@property (nonatomic) q couponMateId;
@property (nonatomic) NSString etType;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
