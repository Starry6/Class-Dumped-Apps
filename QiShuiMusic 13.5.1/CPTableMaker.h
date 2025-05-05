@interface CPTableMaker : NSObject
- (void)dealloc;
- (id)initWithZone:;
- (id)newBackgroundGraphicArrayFromRectangularZone:;
- (id)newTableCellFromZone:;
- (void)determineRowsAndColumns:;
- (void)makeTable;
+ (BOOL)isTable:;
+ (void)makeTableFrom:;
+ (void)makeTablesInZone:;
+ (void)makeTablesInPage:;
@end
