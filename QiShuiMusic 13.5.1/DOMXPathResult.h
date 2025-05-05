@interface DOMXPathResult : DOMObject
@property (nonatomic) S resultType;
@property (nonatomic) double numberValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) BOOL booleanValue;
@property (nonatomic) DOMNode singleNodeValue;
@property (nonatomic) BOOL invalidIteratorState;
@property (nonatomic) I snapshotLength;
- (double)numberValue;
- (void)dealloc;
- (unsigned short)resultType;
- (id)stringValue;
- (BOOL)booleanValue;
- (id)singleNodeValue;
- (BOOL)invalidIteratorState;
- (unsigned int)snapshotLength;
- (id)iterateNext;
- (id)snapshotItem:;
@end
