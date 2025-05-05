@interface EcomPrice : IESLivePBBaseMessage
@property (nonatomic) NSString prefix;
@property (nonatomic) NSString suffix;
@property (nonatomic) q byCent;
@property (nonatomic) NSString formatPrice;
+ (id)descriptor;
@end
