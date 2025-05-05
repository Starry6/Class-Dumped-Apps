@interface MSObjectWrapper : NSObject
@property (nonatomic) q size;
@property (nonatomic) q uniqueID;
@property (nonatomic) <NSCoding> object;
@property (nonatomic) NSInteger errorCount;
- (long long)uniqueID;
- (void)setUniqueID:;
- (int)errorCount;
- (void).cxx_destruct;
- (id)object;
- (void)setErrorCount:;
- (void)setSize:;
- (long long)size;
- (id)initWithObject:size:;
+ (id)wrapperWithObject:size:;
+ (long long)indexOfObject:inWrapperArray:;
+ (id)objectsFromWrappers:;
+ (id)objectsFromWrappers:equalToObject:;
@end
