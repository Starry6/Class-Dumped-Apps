@interface NSBatchUpdateRequestEncodingToken : NSObject
@property (nonatomic) NSString entityName;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSDictionary columnsToUpdate;
@property (nonatomic) q resultType;
@property (nonatomic) q nullValueCount;
@property (nonatomic) BOOL includeSubEntities;
@property (nonatomic) BOOL secure;
- (id)entityName;
- (void)dealloc;
- (id)initWithCoder:;
- (long long)resultType;
- (id)predicate;
- (void)encodeWithCoder:;
- (id)initForRequest:;
- (BOOL)secure;
- (id)columnsToUpdate;
- (long long)nullValueCount;
- (BOOL)includeSubEntities;
+ (BOOL)supportsSecureCoding;
@end
