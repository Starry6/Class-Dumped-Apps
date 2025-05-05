@interface HTSLiveFormat265Resource : IESLivePBBaseMessage
@property (nonatomic) NSString resourceUri;
@property (nonatomic) HTSLiveImage resourceURL;
@property (nonatomic) BOOL hasResourceURL;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString size;
@property (nonatomic) NSString ttmd5;
+ (id)descriptor;
@end
