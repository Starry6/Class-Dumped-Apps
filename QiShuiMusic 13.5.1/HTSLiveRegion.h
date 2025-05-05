@interface HTSLiveRegion : IESLivePBBaseMessage
@property (nonatomic) NSString latitude;
@property (nonatomic) NSString longitude;
@property (nonatomic) NSString city;
+ (id)descriptor;
@end
