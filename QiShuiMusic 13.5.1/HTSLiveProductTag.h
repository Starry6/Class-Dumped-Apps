@interface HTSLiveProductTag : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
