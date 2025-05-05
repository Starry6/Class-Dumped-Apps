@interface NSSQLBindIntarray : NSObject
@property (nonatomic) I index;
@property (nonatomic) @ value;
@property (nonatomic) NSString tableName;
- (void)dealloc;
- (id)tableName;
- (void)setTableName:;
- (unsigned int)index;
- (void)setValue:;
- (void)setIndex:;
- (id)value;
- (id)initWithValue:;
@end
