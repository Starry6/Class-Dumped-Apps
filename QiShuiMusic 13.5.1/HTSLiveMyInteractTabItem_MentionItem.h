@interface HTSLiveMyInteractTabItem_MentionItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser atUser;
@property (nonatomic) BOOL hasAtUser;
@property (nonatomic) HTSLiveUser anchor;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) NSString content;
@property (nonatomic) q eventTime;
+ (id)descriptor;
@end
