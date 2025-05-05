@interface HTSLiveAuthor_AuthorBasicInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString intorduce;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
+ (id)descriptor;
@end
