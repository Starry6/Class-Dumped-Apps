@interface HTSLiveHeaderMedia_ViewButton : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
