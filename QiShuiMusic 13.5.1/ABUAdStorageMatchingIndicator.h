@interface ABUAdStorageMatchingIndicator : NSObject
@property (nonatomic) NSMutableSet excludePackageIds;
@property (nonatomic) NSString linkID;
@property (nonatomic) Q linkIDMatchMode;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) @? allowReuse;
@property (nonatomic) BOOL needCheckAd;
@property (nonatomic) NSString lookupID;
- (unsigned long long)linkIDMatchMode;
- (void)setNeedCheckAd:;
- (id)allowReuse;
- (id)excludePackageIds;
- (BOOL)needCheckAd;
- (void)setAllowReuse:;
- (void)setExcludePackageIds:;
- (void)setLinkIDMatchMode:;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)setReuseIdentifier:;
- (id)linkID;
- (void)setLinkID:;
- (void)setLookupID:;
- (id)lookupID;
@end
