@interface DOMEntity : DOMNode
@property (nonatomic) NSString publicId;
@property (nonatomic) NSString systemId;
@property (nonatomic) NSString notationName;
- (id)systemId;
- (id)publicId;
- (id)notationName;
@end
