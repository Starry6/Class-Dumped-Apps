@interface IESLiveProfileOpenArea : IESLivePBBaseMessage
@property (nonatomic) q businessAreaVersion;
@property (nonatomic) IESLiveProfileBusinessArea businessAreaV3;
@property (nonatomic) BOOL hasBusinessAreaV3;
@property (nonatomic) IESLiveFormComp formComp;
@property (nonatomic) BOOL hasFormComp;
@property (nonatomic) DSLDetail ecomCard;
@property (nonatomic) BOOL hasEcomCard;
@property (nonatomic) IESLiveMyLiveTabs myLiveTabs;
@property (nonatomic) BOOL hasMyLiveTabs;
+ (id)descriptor;
@end
