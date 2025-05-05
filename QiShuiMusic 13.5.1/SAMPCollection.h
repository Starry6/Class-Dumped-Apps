@interface SAMPCollection : SAMPMediaEntity
@property (nonatomic) BOOL editable;
@property (nonatomic) NSArray items;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:;
- (id)encodedClassName;
- (void)setEditable:;
- (BOOL)editable;
+ (id)collection;
+ (id)collectionWithDictionary:context:;
@end
