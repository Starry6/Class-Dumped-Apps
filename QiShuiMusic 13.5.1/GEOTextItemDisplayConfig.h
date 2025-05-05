@interface GEOTextItemDisplayConfig : NSObject
@property (nonatomic) I maxItemsPerRow;
@property (nonatomic) I maxRowCount;
- (id)init;
- (unsigned int)maxItemsPerRow;
- (unsigned int)maxRowCount;
- (id)initWithMaxItemsPerRow:maxRowCount:;
- (id)initWithTextItemDisplayConfig:;
@end
