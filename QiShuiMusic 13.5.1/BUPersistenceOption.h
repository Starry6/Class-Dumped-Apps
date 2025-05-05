@interface BUPersistenceOption : NSObject
@property (nonatomic) Q type;
@property (nonatomic) BOOL shouldRemoveAllObjectsOnMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllObjectsWhenEnteringBackground;
@property (nonatomic) BOOL supportNSCoding;
@property (nonatomic) BOOL supportLRU;
@property (nonatomic) Q capacityCount;
@property (nonatomic) Q capacitySize;
- (BOOL)supportNSCoding;
- (unsigned long long)capacityCount;
- (unsigned long long)capacitySize;
- (void)setCapacityCount:;
- (void)setCapacitySize:;
- (void)setShouldRemoveAllObjectsOnMemoryWarning:;
- (void)setShouldRemoveAllObjectsWhenEnteringBackground:;
- (void)setSupportLRU:;
- (void)setSupportNSCoding:;
- (BOOL)shouldRemoveAllObjectsOnMemoryWarning;
- (BOOL)shouldRemoveAllObjectsWhenEnteringBackground;
- (BOOL)supportLRU;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
@end
