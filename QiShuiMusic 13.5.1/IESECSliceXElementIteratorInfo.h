@interface IESECSliceXElementIteratorInfo : NSObject
@property (nonatomic) Q startIndex;
@property (nonatomic) Q endIndex;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString indexName;
- (void)setIndexName:;
- (id)items;
- (void)setStartIndex:;
- (unsigned long long)startIndex;
- (void)setItems:;
- (id)itemName;
- (void).cxx_destruct;
- (void)setEndIndex:;
- (unsigned long long)endIndex;
- (id)indexName;
- (void)setItemName:;
@end
