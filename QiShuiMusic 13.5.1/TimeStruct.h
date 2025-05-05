@interface TimeStruct : IESLivePBBaseMessage
@property (nonatomic) q timestamp;
@property (nonatomic) NSString timezone;
@property (nonatomic) NSString strTime;
+ (id)descriptor;
@end
