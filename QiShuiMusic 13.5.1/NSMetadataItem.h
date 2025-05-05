@interface NSMetadataItem : NSObject
@property (nonatomic) NSArray attributes;
- (id)_cnui_valueForAttribute:;
- (id)valueForKey:;
- (void)dealloc;
- (id)attributes;
- (id)_item;
- (id)_init:;
- (void)_setQuery:;
- (id)valueForAttribute:;
- (id)valuesForAttributes:;
@end
