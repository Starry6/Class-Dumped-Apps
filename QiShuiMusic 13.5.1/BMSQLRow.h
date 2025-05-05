@interface BMSQLRow : NSObject
@property (nonatomic) NSMutableArray allValues;
- (long long)columnCount;
- (id)init;
- (id)values;
- (unsigned long long)hash;
- (id)initWithValues:;
- (void).cxx_destruct;
- (id)allValues;
- (id)description;
- (BOOL)isEqual:;
- (id)valueAtIdx:;
- (void)setAllValues:;
+ (id)new;
@end
