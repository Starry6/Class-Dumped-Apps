@interface PSITable : NSObject
@property (nonatomic) <PSITableDelegate> delegate;
- (void)dealloc;
- (void)finalizze;
- (void)clear;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:searchable:writable:;
@end
