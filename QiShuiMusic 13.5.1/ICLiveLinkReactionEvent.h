@interface ICLiveLinkReactionEvent : NSObject
@property (nonatomic) NSString reactionIdentifier;
@property (nonatomic) NSString reaction;
@property (nonatomic) NSString itemIdentifier;
- (id)itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)reaction;
- (id)initWithReaction:reactionIdentifier:itemIdentifier:;
- (id)reactionIdentifier;
@end
