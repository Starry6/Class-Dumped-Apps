@interface HTSLiveFormat265SuperResource : IESLivePBBaseMessage
@property (nonatomic) NSString resourceUri;
@property (nonatomic) HTSLiveImage resourceURL;
@property (nonatomic) BOOL hasResourceURL;
@property (nonatomic) NSString md5;
+ (id)descriptor;
@end
