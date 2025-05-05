@interface HTSLiveGameCPUserDownloadMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString userNickName;
@property (nonatomic) q userDownloadCount;
@property (nonatomic) NSString userDownloadContent;
@property (nonatomic) NSString downloadGameName;
@property (nonatomic) NSInteger type;
+ (id)descriptor;
@end
