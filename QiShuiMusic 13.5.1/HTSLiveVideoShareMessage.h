@interface HTSLiveVideoShareMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q itemId;
@property (nonatomic) NSString itemIdStr;
@property (nonatomic) q itemType;
@property (nonatomic) NSString itemTypeStr;
@property (nonatomic) NSString title;
@property (nonatomic) q authorId;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
