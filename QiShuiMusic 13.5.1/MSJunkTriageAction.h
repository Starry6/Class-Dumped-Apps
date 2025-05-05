@interface MSJunkTriageAction : MSMoveTriageAction
@property (nonatomic) BOOL hasNonJunkMessages;
- (id)initWithMessageListSelection:delegate:;
- (BOOL)hasNonJunkMessages;
+ (BOOL)hasNonJunkMessagesInSelection:;
@end
