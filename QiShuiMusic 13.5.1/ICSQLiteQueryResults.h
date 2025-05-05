@interface ICSQLiteQueryResults : NSObject
@property (nonatomic) q firstInt64Value;
@property (nonatomic) NSNumber firstNumberValue;
@property (nonatomic) NSString firstStringValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)clearBindings;
- (id)initWithStatement:;
- (void)bindFloat:atPosition:;
- (void)bindInt64:atPosition:;
- (long long)firstInt64Value;
- (id)firstStringValue;
- (void)bindString:atPosition:;
- (void)bindDouble:atPosition:;
- (void)enumerateRowsUsingBlock:;
- (void)bindDataCopy:atPosition:;
- (void).cxx_destruct;
- (id)firstNumberValue;
- (void)bindStringCopy:atPosition:;
- (void)bindInt:atPosition:;
- (void)bindNumber:atPosition:;
- (void)bindNullAtPosition:;
- (void)bindData:atPosition:;
@end
