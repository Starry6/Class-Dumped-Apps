@interface HTSLiveAuthor : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLiveUser userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) HTSLiveAuthor_AuthorBasicInfo authorBasicInfo;
@property (nonatomic) BOOL hasAuthorBasicInfo;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
