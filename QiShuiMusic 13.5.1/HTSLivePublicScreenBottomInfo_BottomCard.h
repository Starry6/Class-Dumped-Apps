@interface HTSLivePublicScreenBottomInfo_BottomCard : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) q priority;
@property (nonatomic) q duration;
@property (nonatomic) NSString bizParams;
+ (id)descriptor;
@end
