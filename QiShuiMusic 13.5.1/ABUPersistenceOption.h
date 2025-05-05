@interface ABUPersistenceOption : NSObject
@property (nonatomic) Q type;
@property (nonatomic) BOOL shouldRemoveAllObjectsOnMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllObjectsWhenEnteringBackground;
@property (nonatomic) BOOL supportNSCoding;
- (BOOL)supportNSCoding;
- (void)setShouldRemoveAllObjectsOnMemoryWarning:;
- (void)setShouldRemoveAllObjectsWhenEnteringBackground:;
- (void)setSupportNSCoding:;
- (BOOL)shouldRemoveAllObjectsOnMemoryWarning;
- (BOOL)shouldRemoveAllObjectsWhenEnteringBackground;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
@end
