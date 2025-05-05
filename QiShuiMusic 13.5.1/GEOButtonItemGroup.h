@interface GEOButtonItemGroup : GEOButtonItem
@property (nonatomic) NSInteger groupType;
@property (nonatomic) NSArray buttonItems;
@property (nonatomic) Q actionDataIndex;
- (int)groupType;
- (void).cxx_destruct;
- (id)description;
- (int)buttonType;
- (id)initWithGroupParams:;
- (id)buttonItems;
- (unsigned long long)actionDataIndex;
@end
