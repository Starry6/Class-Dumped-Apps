@interface HTSLiveSKU_LimitedFreeNotice : IESLivePBBaseMessage
@property (nonatomic) NSString iconUri;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
