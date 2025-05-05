@interface FLEXSQLResult : NSObject
@property (nonatomic) NSString message;
@property (nonatomic) BOOL isError;
@property (nonatomic) NSArray columns;
@property (nonatomic) NSArray rows;
@property (nonatomic) NSArray keyedRows;
- (id)initWithMessage:columns:rows:;
- (id)keyedRows;
- (id)message;
- (BOOL)isError;
- (id)columns;
- (id)rows;
- (void).cxx_destruct;
+ (id)message:;
+ (id)error:;
+ (id)columns:rows:;
@end
