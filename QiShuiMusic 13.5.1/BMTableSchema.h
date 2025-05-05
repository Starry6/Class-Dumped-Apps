@interface BMTableSchema : NSObject
@property (nonatomic) NSArray columnNames;
- (id)initWithColumnNames:;
- (id)initWithCoder:;
- (id)columnNames;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setColumnNames:;
+ (BOOL)supportsSecureCoding;
@end
