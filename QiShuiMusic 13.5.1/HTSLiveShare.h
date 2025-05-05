@interface HTSLiveShare : IESLivePBBaseMessage
@property (nonatomic) NSString shareURL;
@property (nonatomic) NSString anchorShareText;
@property (nonatomic) NSString userShareText;
+ (id)descriptor;
@end
