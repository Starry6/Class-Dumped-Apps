@interface KVSpanMatchQuery : NSObject
@property (nonatomic) {shared_ptr<skitbridge::Query>=^{Query}^{__shared_weak_count}} query;
- (id)init;
- (id)query;
- (id)locale;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)cleanText;
- (id)initWithQuery:locale:cleanText:;
- (void)setIncludedItemTypes:;
- (void)setIncludedFieldTypes:;
- (BOOL)isItemTypeIncluded:;
- (BOOL)isFieldTypeIncluded:;
@end
