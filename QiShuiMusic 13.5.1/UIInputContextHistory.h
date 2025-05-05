@interface UIInputContextHistory : NSObject
@property (nonatomic) NSSet senderIdentifiers;
@property (nonatomic) NSSet recipientIdentifiers;
@property (nonatomic) NSSet recipientNames;
@property (nonatomic) TIInputContextHistory tiInputContextHistory;
@property (nonatomic) NSString senderIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithRecipientIdentifiers:senderIdentifiers:;
- (id)initWithRecipientIdentifiers:;
- (id)initWithInputContextHistory:;
- (id)recipientIdentifiers;
- (id)senderIdentifiers;
- (id)recipientNames;
- (void)addTextEntry:timestamp:senderIdentifier:;
- (void)updateRecipientNames:;
- (id)senderIdentifier;
- (id)initWithRecipientIdentifiers:senderIdentifier:;
- (void)addTextEntry:timestamp:;
- (id)mostRecentTextEntries:;
- (id)tiInputContextHistory;
@end
