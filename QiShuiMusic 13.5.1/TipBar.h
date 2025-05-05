@interface TipBar : IESLivePBBaseMessage
@property (nonatomic) NSString infoContentTpl;
@property (nonatomic) q countdown;
@property (nonatomic) TipBar_Action action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) NSString schemeURL;
+ (id)descriptor;
@end
