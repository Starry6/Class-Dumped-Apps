@interface CPRMTable : NSObject
@property (nonatomic) ^{CGPDFPage=} page;
@property (nonatomic) BOOL rowOrder;
- (void)dump;
- (unsigned long long)columns;
- (id)page;
- (void)dealloc;
- (unsigned long long)rows;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)layout;
- (id)bounds;
- (id)rowAtIndex:;
- (id)columnAtIndex:;
- (id)initWithRoot:layout:;
- (void)matrixDealloc;
- (BOOL)rowOrder;
- (void)setRowOrder:;
@end
