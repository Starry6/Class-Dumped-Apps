@interface LuckyBoxVoucherGroup : IESLivePBBaseMessage
@property (nonatomic) q validEndDatetime;
@property (nonatomic) NSString faceValue;
@property (nonatomic) NSString unit;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
+ (id)descriptor;
@end
