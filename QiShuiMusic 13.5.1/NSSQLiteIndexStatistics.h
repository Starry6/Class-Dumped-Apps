@interface NSSQLiteIndexStatistics : NSObject
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString indexName;
@property (nonatomic) q executionCount;
@property (nonatomic) q instructionCount;
@property (nonatomic) q rowCount;
- (long long)rowCount;
- (id)storeIdentifier;
- (id)init;
- (void)dealloc;
- (long long)executionCount;
- (id)initWithResultDictionary:storeID:;
- (long long)instructionCount;
- (id)initWithName:storeID:;
- (id)indexName;
@end
