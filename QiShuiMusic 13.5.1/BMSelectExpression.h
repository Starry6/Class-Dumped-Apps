@interface BMSelectExpression : NSObject
@property (nonatomic) NSArray columnNames;
@property (nonatomic) NSArray children;
- (id)init;
- (id)initWithCoder:;
- (id)children;
- (id)columnNames;
- (void)setChildren:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)queryTable:;
- (id)initWithChildren:columnNames:;
- (void)setColumnNames:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
