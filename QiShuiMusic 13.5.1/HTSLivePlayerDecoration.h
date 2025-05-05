@interface HTSLivePlayerDecoration : IESLivePBBaseMessage
@property (nonatomic) NSString leadingDecorationId;
@property (nonatomic) NSString laggingDecorationId;
@property (nonatomic) NSString leadingLastDecorationId;
@property (nonatomic) NSString laggingLastDecorationId;
+ (id)descriptor;
@end
