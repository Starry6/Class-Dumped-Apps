@interface IESLiveJAccreditInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger jAccreditBasic;
@property (nonatomic) NSInteger jAccreditAdvance;
@property (nonatomic) NSInteger jAccreditContent;
@property (nonatomic) NSInteger jAccreditLive;
+ (id)descriptor;
@end
