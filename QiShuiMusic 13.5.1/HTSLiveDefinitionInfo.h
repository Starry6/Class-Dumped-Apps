@interface HTSLiveDefinitionInfo : IESLivePBBaseMessage
@property (nonatomic) NSString definition;
@property (nonatomic) NSInteger fps;
@property (nonatomic) NSInteger disable;
+ (id)descriptor;
@end
