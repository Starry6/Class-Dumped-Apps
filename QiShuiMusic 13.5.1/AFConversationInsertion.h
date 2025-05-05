@interface AFConversationInsertion : NSObject
@property (nonatomic) q conversationItemType;
@property (nonatomic) AceObject aceObject;
@property (nonatomic) NSString aceCommandIdentifier;
@property (nonatomic) BOOL transient;
@property (nonatomic) BOOL supplemental;
@property (nonatomic) BOOL immersiveExperience;
@property (nonatomic) NSIndexPath indexPath;
- (void).cxx_destruct;
- (BOOL)isTransient;
- (id)indexPath;
- (id)aceObject;
- (id)aceCommandIdentifier;
- (BOOL)isSupplemental;
- (BOOL)isImmersiveExperience;
- (id)initWithConversationItemType:aceObject:aceCommandIdentifier:transient:supplemental:immersiveExperience:indexPath:;
- (long long)conversationItemType;
@end
