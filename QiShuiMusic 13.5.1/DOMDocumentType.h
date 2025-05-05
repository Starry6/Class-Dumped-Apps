@interface DOMDocumentType : DOMNode
@property (nonatomic) NSString name;
@property (nonatomic) DOMNamedNodeMap entities;
@property (nonatomic) DOMNamedNodeMap notations;
@property (nonatomic) NSString publicId;
@property (nonatomic) NSString systemId;
@property (nonatomic) NSString internalSubset;
- (void)remove;
- (id)entities;
- (id)systemId;
- (id)name;
- (id)notations;
- (id)publicId;
- (id)internalSubset;
@end
