@interface IESECDelayParam : GPBMessage
@property (nonatomic) NSInteger delayStrategy;
@property (nonatomic) NSInteger minDelayMs;
@property (nonatomic) NSInteger maxDelayMs;
+ (id)descriptor;
@end
