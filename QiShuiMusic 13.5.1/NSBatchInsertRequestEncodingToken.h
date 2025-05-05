@interface NSBatchInsertRequestEncodingToken : NSObject
@property (nonatomic) NSString entityName;
@property (nonatomic) NSArray objectsToInsert;
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) Q resultType;
@property (nonatomic) BOOL secure;
- (id)inputStream;
- (id)entityName;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (void)encodeWithCoder:;
- (id)initForRequest:;
- (BOOL)secure;
- (id)objectsToInsert;
+ (BOOL)supportsSecureCoding;
@end
