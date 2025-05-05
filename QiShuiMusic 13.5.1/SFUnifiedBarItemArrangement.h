@interface SFUnifiedBarItemArrangement : NSObject
@property (nonatomic) BOOL allowsCenteringInlineContentView;
@property (nonatomic) NSArray leadingItems;
@property (nonatomic) NSArray trailingItems;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithLeadingItems:trailingItems:;
- (void)enumerateAllItemsUsingBlock:;
- (BOOL)allowsCenteringInlineContentView;
- (id)leadingItems;
- (id)trailingItems;
@end
