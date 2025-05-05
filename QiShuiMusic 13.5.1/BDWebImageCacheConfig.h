@interface BDWebImageCacheConfig : NSObject
@property (nonatomic) Q maxCacheEntries;
@property (nonatomic) Q maxCacheEntrySize;
@property (nonatomic) Q maxCacheSize;
@property (nonatomic) Q diskCacheMaxCacheSize;
@property (nonatomic) BOOL diskCacheEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)maxCacheEntries;
- (BOOL)diskCacheEnabled;
- (unsigned long long)diskCacheMaxCacheSize;
- (unsigned long long)maxCacheEntrySize;
- (void)setDiskCacheEnabled:;
- (void)setDiskCacheMaxCacheSize:;
- (void)setMaxCacheEntries:;
- (void)setMaxCacheEntrySize:;
- (unsigned long long)maxCacheSize;
- (void)setMaxCacheSize:;
+ (id)modelCustomPropertyMapper;
@end
