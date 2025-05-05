@interface GEOSortPriorityMappingEntry : NSObject
@property (nonatomic) q priority;
@property (nonatomic) q resultType;
@property (nonatomic) q resultSubtype;
- (id)init;
- (long long)resultType;
- (long long)priority;
- (id)initWithPriority:resultType:resultSubtype:;
- (long long)resultSubtype;
@end
