@interface EDPBModelFeaturesImportant : PBCodable
@property (nonatomic) BOOL hasUnknownFeatureCount;
@property (nonatomic) I unknownFeatureCount;
@property (nonatomic) BOOL hasCcContainsContact;
@property (nonatomic) BOOL ccContainsContact;
@property (nonatomic) BOOL hasCcIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL ccIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasCcIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL ccIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasCcIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL ccIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasCcIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL ccIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL hasCcIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL ccIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasCcIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL ccIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasCcIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL ccIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasCcIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL ccIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL hasCcIsVip;
@property (nonatomic) BOOL ccIsVip;
@property (nonatomic) BOOL hasFromListId;
@property (nonatomic) BOOL fromListId;
@property (nonatomic) BOOL hasMessageIsForward;
@property (nonatomic) BOOL messageIsForward;
@property (nonatomic) BOOL hasMessageIsReply;
@property (nonatomic) BOOL messageIsReply;
@property (nonatomic) BOOL hasNumRecipients;
@property (nonatomic) I numRecipients;
@property (nonatomic) BOOL hasSenderIsContact;
@property (nonatomic) BOOL senderIsContact;
@property (nonatomic) BOOL hasSenderIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL senderIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasSenderIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL senderIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasSenderIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL senderIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasSenderIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL senderIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL hasSenderIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL senderIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasSenderIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL senderIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasSenderIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL senderIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasSenderIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL senderIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL hasSenderIsVip;
@property (nonatomic) BOOL senderIsVip;
@property (nonatomic) BOOL hasSubjectIsTopWordsBasedOnRespond;
@property (nonatomic) BOOL subjectIsTopWordsBasedOnRespond;
@property (nonatomic) BOOL hasSubjectIsTopWordsBasedOnScroll;
@property (nonatomic) BOOL subjectIsTopWordsBasedOnScroll;
@property (nonatomic) BOOL hasSubjectIsTopWordsBasedOnSend;
@property (nonatomic) BOOL subjectIsTopWordsBasedOnSend;
@property (nonatomic) BOOL hasSubjectIsTopWordsBasedOnView;
@property (nonatomic) BOOL subjectIsTopWordsBasedOnView;
@property (nonatomic) BOOL hasTimeReceived;
@property (nonatomic) NSInteger timeReceived;
@property (nonatomic) BOOL hasToContainsContact;
@property (nonatomic) BOOL toContainsContact;
@property (nonatomic) BOOL hasToIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL toIsTopDirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasToIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL toIsTopDirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasToIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL toIsTopDirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasToIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL toIsTopDirectAddressesBasedOnView;
@property (nonatomic) BOOL hasToIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL toIsTopIndirectAddressesBasedOnRespond;
@property (nonatomic) BOOL hasToIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL toIsTopIndirectAddressesBasedOnScroll;
@property (nonatomic) BOOL hasToIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL toIsTopIndirectAddressesBasedOnSend;
@property (nonatomic) BOOL hasToIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL toIsTopIndirectAddressesBasedOnView;
@property (nonatomic) BOOL hasToIsVip;
@property (nonatomic) BOOL toIsVip;
@property (nonatomic) BOOL hasUserIsBcc;
@property (nonatomic) BOOL userIsBcc;
@property (nonatomic) BOOL hasUserIsCc;
@property (nonatomic) BOOL userIsCc;
@property (nonatomic) BOOL hasUserIsSender;
@property (nonatomic) BOOL userIsSender;
@property (nonatomic) BOOL hasUserIsTo;
@property (nonatomic) BOOL userIsTo;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)userIsSender;
- (void)setUserIsSender:;
- (int)timeReceived;
- (void)setTimeReceived:;
- (BOOL)senderIsVip;
- (void)setSenderIsVip:;
- (void)setHasSenderIsVip:;
- (BOOL)hasSenderIsVip;
- (void)setHasUserIsSender:;
- (BOOL)hasUserIsSender;
- (void)setMessageIsReply:;
- (void)setHasMessageIsReply:;
- (BOOL)hasMessageIsReply;
- (void)setUserIsTo:;
- (void)setHasUserIsTo:;
- (BOOL)hasUserIsTo;
- (void)setUserIsCc:;
- (void)setHasUserIsCc:;
- (BOOL)hasUserIsCc;
- (void)setUserIsBcc:;
- (void)setHasUserIsBcc:;
- (BOOL)hasUserIsBcc;
- (BOOL)messageIsReply;
- (BOOL)userIsTo;
- (BOOL)userIsCc;
- (BOOL)userIsBcc;
- (void)setUnknownFeatureCount:;
- (void)setHasUnknownFeatureCount:;
- (BOOL)hasUnknownFeatureCount;
- (void)setCcContainsContact:;
- (void)setHasCcContainsContact:;
- (BOOL)hasCcContainsContact;
- (void)setCcIsTopDirectAddressesBasedOnRespond:;
- (void)setHasCcIsTopDirectAddressesBasedOnRespond:;
- (BOOL)hasCcIsTopDirectAddressesBasedOnRespond;
- (void)setCcIsTopDirectAddressesBasedOnScroll:;
- (void)setHasCcIsTopDirectAddressesBasedOnScroll:;
- (BOOL)hasCcIsTopDirectAddressesBasedOnScroll;
- (void)setCcIsTopDirectAddressesBasedOnSend:;
- (void)setHasCcIsTopDirectAddressesBasedOnSend:;
- (BOOL)hasCcIsTopDirectAddressesBasedOnSend;
- (void)setCcIsTopDirectAddressesBasedOnView:;
- (void)setHasCcIsTopDirectAddressesBasedOnView:;
- (BOOL)hasCcIsTopDirectAddressesBasedOnView;
- (void)setCcIsTopIndirectAddressesBasedOnRespond:;
- (void)setHasCcIsTopIndirectAddressesBasedOnRespond:;
- (BOOL)hasCcIsTopIndirectAddressesBasedOnRespond;
- (void)setCcIsTopIndirectAddressesBasedOnScroll:;
- (void)setHasCcIsTopIndirectAddressesBasedOnScroll:;
- (BOOL)hasCcIsTopIndirectAddressesBasedOnScroll;
- (void)setCcIsTopIndirectAddressesBasedOnSend:;
- (void)setHasCcIsTopIndirectAddressesBasedOnSend:;
- (BOOL)hasCcIsTopIndirectAddressesBasedOnSend;
- (void)setCcIsTopIndirectAddressesBasedOnView:;
- (void)setHasCcIsTopIndirectAddressesBasedOnView:;
- (BOOL)hasCcIsTopIndirectAddressesBasedOnView;
- (void)setCcIsVip:;
- (void)setHasCcIsVip:;
- (BOOL)hasCcIsVip;
- (void)setFromListId:;
- (void)setHasFromListId:;
- (BOOL)hasFromListId;
- (void)setMessageIsForward:;
- (void)setHasMessageIsForward:;
- (BOOL)hasMessageIsForward;
- (void)setNumRecipients:;
- (void)setHasNumRecipients:;
- (BOOL)hasNumRecipients;
- (void)setSenderIsContact:;
- (void)setHasSenderIsContact:;
- (BOOL)hasSenderIsContact;
- (void)setSenderIsTopDirectAddressesBasedOnRespond:;
- (void)setHasSenderIsTopDirectAddressesBasedOnRespond:;
- (BOOL)hasSenderIsTopDirectAddressesBasedOnRespond;
- (void)setSenderIsTopDirectAddressesBasedOnScroll:;
- (void)setHasSenderIsTopDirectAddressesBasedOnScroll:;
- (BOOL)hasSenderIsTopDirectAddressesBasedOnScroll;
- (void)setSenderIsTopDirectAddressesBasedOnSend:;
- (void)setHasSenderIsTopDirectAddressesBasedOnSend:;
- (BOOL)hasSenderIsTopDirectAddressesBasedOnSend;
- (void)setSenderIsTopDirectAddressesBasedOnView:;
- (void)setHasSenderIsTopDirectAddressesBasedOnView:;
- (BOOL)hasSenderIsTopDirectAddressesBasedOnView;
- (void)setSenderIsTopIndirectAddressesBasedOnRespond:;
- (void)setHasSenderIsTopIndirectAddressesBasedOnRespond:;
- (BOOL)hasSenderIsTopIndirectAddressesBasedOnRespond;
- (void)setSenderIsTopIndirectAddressesBasedOnScroll:;
- (void)setHasSenderIsTopIndirectAddressesBasedOnScroll:;
- (BOOL)hasSenderIsTopIndirectAddressesBasedOnScroll;
- (void)setSenderIsTopIndirectAddressesBasedOnSend:;
- (void)setHasSenderIsTopIndirectAddressesBasedOnSend:;
- (BOOL)hasSenderIsTopIndirectAddressesBasedOnSend;
- (void)setSenderIsTopIndirectAddressesBasedOnView:;
- (void)setHasSenderIsTopIndirectAddressesBasedOnView:;
- (BOOL)hasSenderIsTopIndirectAddressesBasedOnView;
- (void)setSubjectIsTopWordsBasedOnRespond:;
- (void)setHasSubjectIsTopWordsBasedOnRespond:;
- (BOOL)hasSubjectIsTopWordsBasedOnRespond;
- (void)setSubjectIsTopWordsBasedOnScroll:;
- (void)setHasSubjectIsTopWordsBasedOnScroll:;
- (BOOL)hasSubjectIsTopWordsBasedOnScroll;
- (void)setSubjectIsTopWordsBasedOnSend:;
- (void)setHasSubjectIsTopWordsBasedOnSend:;
- (BOOL)hasSubjectIsTopWordsBasedOnSend;
- (void)setSubjectIsTopWordsBasedOnView:;
- (void)setHasSubjectIsTopWordsBasedOnView:;
- (BOOL)hasSubjectIsTopWordsBasedOnView;
- (void)setHasTimeReceived:;
- (BOOL)hasTimeReceived;
- (id)timeReceivedAsString:;
- (int)StringAsTimeReceived:;
- (void)setToContainsContact:;
- (void)setHasToContainsContact:;
- (BOOL)hasToContainsContact;
- (void)setToIsTopDirectAddressesBasedOnRespond:;
- (void)setHasToIsTopDirectAddressesBasedOnRespond:;
- (BOOL)hasToIsTopDirectAddressesBasedOnRespond;
- (void)setToIsTopDirectAddressesBasedOnScroll:;
- (void)setHasToIsTopDirectAddressesBasedOnScroll:;
- (BOOL)hasToIsTopDirectAddressesBasedOnScroll;
- (void)setToIsTopDirectAddressesBasedOnSend:;
- (void)setHasToIsTopDirectAddressesBasedOnSend:;
- (BOOL)hasToIsTopDirectAddressesBasedOnSend;
- (void)setToIsTopDirectAddressesBasedOnView:;
- (void)setHasToIsTopDirectAddressesBasedOnView:;
- (BOOL)hasToIsTopDirectAddressesBasedOnView;
- (void)setToIsTopIndirectAddressesBasedOnRespond:;
- (void)setHasToIsTopIndirectAddressesBasedOnRespond:;
- (BOOL)hasToIsTopIndirectAddressesBasedOnRespond;
- (void)setToIsTopIndirectAddressesBasedOnScroll:;
- (void)setHasToIsTopIndirectAddressesBasedOnScroll:;
- (BOOL)hasToIsTopIndirectAddressesBasedOnScroll;
- (void)setToIsTopIndirectAddressesBasedOnSend:;
- (void)setHasToIsTopIndirectAddressesBasedOnSend:;
- (BOOL)hasToIsTopIndirectAddressesBasedOnSend;
- (void)setToIsTopIndirectAddressesBasedOnView:;
- (void)setHasToIsTopIndirectAddressesBasedOnView:;
- (BOOL)hasToIsTopIndirectAddressesBasedOnView;
- (void)setToIsVip:;
- (void)setHasToIsVip:;
- (BOOL)hasToIsVip;
- (unsigned int)unknownFeatureCount;
- (BOOL)ccContainsContact;
- (BOOL)ccIsTopDirectAddressesBasedOnRespond;
- (BOOL)ccIsTopDirectAddressesBasedOnScroll;
- (BOOL)ccIsTopDirectAddressesBasedOnSend;
- (BOOL)ccIsTopDirectAddressesBasedOnView;
- (BOOL)ccIsTopIndirectAddressesBasedOnRespond;
- (BOOL)ccIsTopIndirectAddressesBasedOnScroll;
- (BOOL)ccIsTopIndirectAddressesBasedOnSend;
- (BOOL)ccIsTopIndirectAddressesBasedOnView;
- (BOOL)ccIsVip;
- (BOOL)fromListId;
- (BOOL)messageIsForward;
- (unsigned int)numRecipients;
- (BOOL)senderIsContact;
- (BOOL)senderIsTopDirectAddressesBasedOnRespond;
- (BOOL)senderIsTopDirectAddressesBasedOnScroll;
- (BOOL)senderIsTopDirectAddressesBasedOnSend;
- (BOOL)senderIsTopDirectAddressesBasedOnView;
- (BOOL)senderIsTopIndirectAddressesBasedOnRespond;
- (BOOL)senderIsTopIndirectAddressesBasedOnScroll;
- (BOOL)senderIsTopIndirectAddressesBasedOnSend;
- (BOOL)senderIsTopIndirectAddressesBasedOnView;
- (BOOL)subjectIsTopWordsBasedOnRespond;
- (BOOL)subjectIsTopWordsBasedOnScroll;
- (BOOL)subjectIsTopWordsBasedOnSend;
- (BOOL)subjectIsTopWordsBasedOnView;
- (BOOL)toContainsContact;
- (BOOL)toIsTopDirectAddressesBasedOnRespond;
- (BOOL)toIsTopDirectAddressesBasedOnScroll;
- (BOOL)toIsTopDirectAddressesBasedOnSend;
- (BOOL)toIsTopDirectAddressesBasedOnView;
- (BOOL)toIsTopIndirectAddressesBasedOnRespond;
- (BOOL)toIsTopIndirectAddressesBasedOnScroll;
- (BOOL)toIsTopIndirectAddressesBasedOnSend;
- (BOOL)toIsTopIndirectAddressesBasedOnView;
- (BOOL)toIsVip;
@end
