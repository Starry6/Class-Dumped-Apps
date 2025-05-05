@interface IESLiveShopHeaderIcon : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLiveImage URL;
@property (nonatomic) BOOL hasURL;
+ (id)descriptor;
@end
