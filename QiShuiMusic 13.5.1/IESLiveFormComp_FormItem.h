@interface IESLiveFormComp_FormItem : IESLivePBBaseMessage
@property (nonatomic) IESLiveText key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) IESLiveText value;
@property (nonatomic) BOOL hasValue;
+ (id)descriptor;
@end
