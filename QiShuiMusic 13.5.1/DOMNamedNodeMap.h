@interface DOMNamedNodeMap : DOMObject
@property (nonatomic) I length;
- (void)dealloc;
- (unsigned int)length;
- (id)item:;
- (id)getNamedItem:;
- (id)setNamedItem:;
- (id)removeNamedItem:;
- (id)getNamedItemNS:localName:;
- (id)setNamedItemNS:;
- (id)removeNamedItemNS:localName:;
- (id)getNamedItemNS::;
- (id)removeNamedItemNS::;
@end
