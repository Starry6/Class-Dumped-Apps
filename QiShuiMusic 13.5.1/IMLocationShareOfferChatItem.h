@interface IMLocationShareOfferChatItem : IMTranscriptChatItem
@property (nonatomic) q offerState;
@property (nonatomic) BOOL actionableEclipsed;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL failed;
@property (nonatomic) NSDate time;
@property (nonatomic) IMHandle sender;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)time;
- (id)sender;
- (void).cxx_destruct;
- (BOOL)failed;
- (id)copyWithZone:;
- (BOOL)isFromMe;
- (long long)offerState;
- (id)_initWithItem:sender:;
- (BOOL)_isActionableEclipsed;
- (void)_setActionableEclipsed:;
- (BOOL)actionableEclipsed;
@end
