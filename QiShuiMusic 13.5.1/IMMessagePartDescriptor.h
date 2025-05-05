@interface IMMessagePartDescriptor : NSObject
@property (nonatomic) BOOL hasLoadedTransferGUID;
@property (nonatomic) Q messagePartIndex;
@property (nonatomic) {_NSRange=QQ} messagePartRange;
@property (nonatomic) NSAttributedString messagePartBody;
@property (nonatomic) NSString transferGUID;
@property (nonatomic) NSArray links;
@property (nonatomic) NSArray mapLocations;
- (id)links;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)messagePartBody;
- (id)transferGUID;
- (id)messagePartRange;
- (id)initWithMessagePartBody:messagePartIndex:messagePartRange:;
- (BOOL)isEqualToMessagePart:ignoringRange:;
- (id)messagePartGUIDForMessageGUID:;
- (id)mapLocations;
- (unsigned long long)messagePartIndex;
- (BOOL)hasLoadedTransferGUID;
- (void)setHasLoadedTransferGUID:;
@end
