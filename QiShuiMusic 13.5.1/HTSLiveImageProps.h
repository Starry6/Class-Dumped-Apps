@interface HTSLiveImageProps : IESLivePBBaseMessage
@property (nonatomic) NSString src;
@property (nonatomic) BOOL hideEar;
+ (id)descriptor;
@end
