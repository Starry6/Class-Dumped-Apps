@interface IMMomentShareStatusChatItem : IMTranscriptChatItem
@property (nonatomic) NSString activityTitle;
@property (nonatomic) NSDate expirationDate;
- (id)activityTitle;
- (unsigned long long)hash;
- (id)expirationDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isFromMe;
- (id)_initWithItem:activityTitle:expirationDate:;
- (BOOL)_isEqualToGuid:activityTitle:expirationDate:;
- (BOOL)wouldBeEqualIfInitializedWithItem:activityTitle:expirationDate:;
+ (id)_guidForItem:;
@end
