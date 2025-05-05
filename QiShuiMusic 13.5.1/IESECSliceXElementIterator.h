@interface IESECSliceXElementIterator : IESECSliceXBaseModel
@property (nonatomic) NSString start;
@property (nonatomic) NSString end;
@property (nonatomic) NSString items;
@property (nonatomic) NSString item;
@property (nonatomic) NSString index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getIteratorWithData:;
- (void)setEnd:;
- (id)item;
- (void)setStart:;
- (id)end;
- (id)start;
- (id)items;
- (id)index;
- (void)setItem:;
- (void)setItems:;
- (void)setIndex:;
- (void).cxx_destruct;
+ (id)propertyKeyWithJSONKey;
@end
