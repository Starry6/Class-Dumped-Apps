@interface IMAggregateAcknowledgmentChatItem : IMAssociatedMessageChatItem
@property (nonatomic) NSArray acknowledgments;
@property (nonatomic) IMMessageAcknowledgmentChatItem fromMeAcknowledgement;
@property (nonatomic) BOOL includesFromMe;
@property (nonatomic) BOOL latestIsFromMe;
@property (nonatomic) BOOL includesMultiple;
@property (nonatomic) IMTapback latestTapback;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)latestTapback;
- (id)fromMeAcknowledgement;
- (BOOL)includesFromMe;
- (BOOL)latestIsFromMe;
- (BOOL)includesMultiple;
- (id)acknowledgments;
- (id)_initWithAcknowledgments:;
@end
