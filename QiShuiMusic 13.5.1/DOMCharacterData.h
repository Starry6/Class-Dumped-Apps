@interface DOMCharacterData : DOMNode
@property (nonatomic) NSString data;
@property (nonatomic) I length;
- (void)remove;
- (void)appendData:;
- (id)data;
- (void)setData:;
- (unsigned int)length;
- (id)previousElementSibling;
- (id)nextElementSibling;
- (id)substringData:length:;
- (void)insertData:data:;
- (void)deleteData:length:;
- (void)replaceData:length:data:;
- (id)substringData::;
- (void)insertData::;
- (void)deleteData::;
- (void)replaceData:::;
@end
