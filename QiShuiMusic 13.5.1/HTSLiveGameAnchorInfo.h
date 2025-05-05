@interface HTSLiveGameAnchorInfo : IESLivePBBaseMessage
@property (nonatomic) NSString categoryId;
@property (nonatomic) BOOL isKeyAnchor;
+ (id)descriptor;
@end
