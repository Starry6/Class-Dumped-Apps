@interface FreeCellInfoItem : IESLivePBBaseMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSMutableArray rulesArray;
@property (nonatomic) Q rulesArray_Count;
@property (nonatomic) NSString text;
@property (nonatomic) NSString ruleSptextColor;
@property (nonatomic) NSMutableArray ruleSptextArray;
@property (nonatomic) Q ruleSptextArray_Count;
@property (nonatomic) NSString detailURL;
@property (nonatomic) NSString rankListURL;
+ (id)descriptor;
@end
