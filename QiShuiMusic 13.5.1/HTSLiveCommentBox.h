@interface HTSLiveCommentBox : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString placeholder;
+ (id)descriptor;
@end
