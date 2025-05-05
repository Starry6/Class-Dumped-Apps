@interface IMMessagePartHistoricalContent : NSObject
@property (nonatomic) NSAttributedString messagePartText;
@property (nonatomic) NSDate dateSent;
@property (nonatomic) NSString backwardCompatibleMessageGUID;
- (void).cxx_destruct;
- (id)description;
- (id)dateSent;
- (void)setDateSent:;
- (id)initWithMessagePartText:dateSent:backwardCompatibleMessageGUID:;
- (id)messagePartText;
- (void)setMessagePartText:;
- (id)backwardCompatibleMessageGUID;
- (void)setBackwardCompatibleMessageGUID:;
- (id)initWithMessageSummaryInfoDictionary:;
- (id)messageSummaryInfoDictionaryRepresentation;
@end
