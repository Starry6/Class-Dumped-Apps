@interface TimeGearInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger timeGear;
@property (nonatomic) NSString text;
@property (nonatomic) q interval;
+ (id)descriptor;
@end
