@interface ELParserLinkNode : NSObject
@property (nonatomic) @ nodeValue;
@property (nonatomic) ELParserLinkNode previous;
@property (nonatomic) ELParserLinkNode next;
- (id)initWithNodeVlaue:;
- (void)setPrevious:;
- (id)previous;
- (id)next;
- (void)setNext:;
- (void).cxx_destruct;
- (id)nodeValue;
- (void)setNodeValue:;
@end
