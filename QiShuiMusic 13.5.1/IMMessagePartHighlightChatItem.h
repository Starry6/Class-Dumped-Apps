@interface IMMessagePartHighlightChatItem : IMMessageChatItem
@property (nonatomic) {IMAssociatedMessageGeometryDescriptor=QQfffff} geometryDescriptor;
@property (nonatomic) Q highlightedMessagePartIndex;
@property (nonatomic) NSString highlightedMessagePartGUID;
@property (nonatomic) {_NSRange=QQ} highlightedMessagePartRange;
@property (nonatomic) BOOL highlightedMessageIsFromMe;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)highlightedMessageIsFromMe;
- (id)highlightedMessagePartGUID;
- (id)highlightedMessagePartRange;
- (id)geometryDescriptor;
- (id)_initWithItem:highlightedMessagePartGUID:highlightedMessagePartIndex:highlightedMessagePartRange:;
- (unsigned long long)highlightedMessagePartIndex;
@end
