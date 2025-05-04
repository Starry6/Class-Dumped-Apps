@interface AWEIMInterEmojiMatcherDelayModel : NSObject
@property (nonatomic) <AWEIMInterEmojiMatcherProtocol> matcher;
@property (nonatomic) AWEIMSpecialEmojiRelationModel relation;
@property (nonatomic) NSArray fromMessages;
- (id)fromMessages;
- (void)setFromMessages:;
- (id)matcher;
- (void)setRelation:;
- (void).cxx_destruct;
- (id)relation;
- (void)setMatcher:;
@end
