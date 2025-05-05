@interface Diff : NSObject
@property (nonatomic) NSInteger operation;
@property (nonatomic) NSString text;
- (id)initWithOperation:andText:;
- (int)operation;
- (void)dealloc;
- (void)setText:;
- (unsigned long long)hash;
- (void)setOperation:;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToDiff:;
+ (id)diffWithOperation:andText:;
@end
