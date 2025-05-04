@interface AWEKVStorageHandlerConfiguration : NSObject
@property (nonatomic) q cacheType;
@property (nonatomic) q useModule;
@property (nonatomic) BOOL shouldRemoveAllWhenMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllWhenEnterBackground;
@property (nonatomic) Q memoryCountLimit;
- (void)setMemoryCountLimit:;
- (unsigned long long)memoryCountLimit;
- (long long)useModule;
- (void)setUseModule:;
- (BOOL)shouldRemoveAllWhenMemoryWarning;
- (void)setShouldRemoveAllWhenMemoryWarning:;
- (BOOL)shouldRemoveAllWhenEnterBackground;
- (void)setShouldRemoveAllWhenEnterBackground:;
- (id)init;
- (long long)cacheType;
- (void)setCacheType:;
@end
