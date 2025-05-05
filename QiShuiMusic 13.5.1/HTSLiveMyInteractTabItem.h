@interface HTSLiveMyInteractTabItem : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) HTSLiveMyInteractTabItem_VisitorItem visitorItem;
@property (nonatomic) BOOL hasVisitorItem;
@property (nonatomic) HTSLiveMyInteractTabItem_FollowerItem followerItem;
@property (nonatomic) BOOL hasFollowerItem;
@property (nonatomic) HTSLiveMyInteractTabItem_MentionItem mentionItem;
@property (nonatomic) BOOL hasMentionItem;
@property (nonatomic) HTSLiveMyInteractTabItem_TextItem textItem;
@property (nonatomic) BOOL hasTextItem;
@property (nonatomic) HTSLiveMyInteractTabItem_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
