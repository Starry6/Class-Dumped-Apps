@interface IMTapbackSender : NSObject
@property (nonatomic) IMTapback tapback;
@property (nonatomic) NSString messageGUID;
@property (nonatomic) {_NSRange=QQ} messagePartRange;
@property (nonatomic) NSDictionary messageSummaryInfo;
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) NSAttributedString messageContent;
@property (nonatomic) NSString backwardCompatibilityString;
@property (nonatomic) NSAttributedString attributedContentString;
@property (nonatomic) IMChat chat;
- (id)threadIdentifier;
- (void)send;
- (void).cxx_destruct;
- (id)initWithTapback:chat:messageGUID:messagePartRange:messageSummaryInfo:threadIdentifier:;
- (id)tapback;
- (id)messageSummaryInfo;
- (id)chat;
- (id)messageGUID;
- (id)messagePartRange;
- (id)initWithTapback:chat:messagePartChatItem:;
- (id)messageContent;
- (id)backwardCompatibilityString;
- (id)attributedContentString;
@end
