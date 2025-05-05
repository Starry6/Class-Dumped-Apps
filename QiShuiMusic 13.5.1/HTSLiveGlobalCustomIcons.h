@interface HTSLiveGlobalCustomIcons : IESLivePBBaseMessage
@property (nonatomic) NSString staticIconURL;
@property (nonatomic) NSString animatedIconURL;
@property (nonatomic) NSString animatedCommonIconURL;
+ (id)descriptor;
@end
