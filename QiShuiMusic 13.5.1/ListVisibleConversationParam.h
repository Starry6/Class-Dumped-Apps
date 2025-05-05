@interface ListVisibleConversationParam : IESLivePBBaseMessage
@property (nonatomic) NSString secAnchorId;
@property (nonatomic) NSInteger conversationType;
+ (id)descriptor;
@end
