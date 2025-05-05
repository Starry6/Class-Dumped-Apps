@interface IDSInvitation : NSObject
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) NSString senderMergeID;
@property (nonatomic) q state;
@property (nonatomic) <IDSInvitationContext> context;
@property (nonatomic) NSDate expirationDate;
- (id)uniqueID;
- (id)context;
- (id)expirationDate;
- (long long)state;
- (void).cxx_destruct;
- (id)initWithState:expirationDate:uniqueID:context:;
- (id)senderMergeID;
@end
