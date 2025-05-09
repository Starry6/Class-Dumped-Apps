@interface ABUAdPackage : NSObject
@property (nonatomic) NSString lookupID;
@property (nonatomic) <ABUCustomAdapter> adapter;
@property (nonatomic) @ ad;
@property (nonatomic) NSString mediaRitId;
@property (nonatomic) NSString packageID;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString adExtra;
@property (nonatomic) q status;
@property (nonatomic) Q reuseCount;
@property (nonatomic) BOOL inUse;
@property (nonatomic) q adType;
@property (nonatomic) NSString linkID;
@property (nonatomic) NSString reuseLinkID;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) BOOL hasCompletion;
@property (nonatomic) NSString ecpm;
@property (nonatomic) NSDate loadTime;
@property (nonatomic) BOOL fromCustomAdapter;
@property (nonatomic) NSMutableSet tags;
@property (nonatomic) Q count;
@property (nonatomic) NSString mediaName;
@property (nonatomic) NSString mediaLogName;
@property (nonatomic) q adSubtype;
@property (nonatomic) ABUMediaSlotConfig slotConfig;
@property (nonatomic) NSDictionary mediaExt;
@property (nonatomic) ABUMediaAdProcess process;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) BOOL isFillAfterTotalLoadFail;
@property (nonatomic) double biddingECPM;
@property (nonatomic) NSString eCPMLevel;
@property (nonatomic) NSString eCPM;
@property (nonatomic) NSNumber pricingType;
- (BOOL)canUse:;
- (void)removeInUseMark;
- (id)adExtra;
- (void)setReuseLinkID:;
- (long long)adSubtype;
- (void)addInUseMark;
- (double)biddingECPM;
- (BOOL)canUse;
- (BOOL)didClick;
- (BOOL)didPlayAgainClick;
- (BOOL)didPlayAgainShow;
- (id)eCPM;
- (id)eCPMLevel;
- (id)ecpm;
- (void)enumPackagesWithBlock:;
- (BOOL)fromCustomAdapter;
- (id)getAdNetworkPlatformName;
- (id)getAdNetworkRitId;
- (long long)getAdnType;
- (id)getDisclosureMediaExt;
- (id)getPreEcpm;
- (BOOL)isFillAfterTotalLoadFail;
- (id)mediaExt;
- (id)mediaLogName;
- (id)mediaRitId;
- (id)preloadCache;
- (id)pricingType;
- (id)reuse;
- (unsigned long long)reuseCount;
- (id)reuseLinkID;
- (void)setAd:;
- (void)setAdExtra:;
- (void)setEcpm:;
- (void)setFromCustomAdapter:;
- (void)setHasCompletion:;
- (void)setIsFillAfterTotalLoadFail:;
- (void)setLoadTime:;
- (void)setMediaExt:;
- (void)setMediaRitId:;
- (void)setReuseCount:;
- (void)setSlotConfig:;
- (id)slotConfig;
- (id)toDetailDictionary;
- (void)updateWithBlock:;
- (void)addTag:;
- (void)setCount:;
- (void)setStatus:;
- (void)addListener:;
- (id)reuseIdentifier;
- (id)init;
- (id)tags;
- (id)preload;
- (void)setTags:;
- (id)init_;
- (id)toDictionary;
- (BOOL)isExpired;
- (BOOL)inUse;
- (long long)adType;
- (void)setProcess:;
- (BOOL)isInvalid;
- (id)process;
- (id)adapter;
- (void).cxx_destruct;
- (void)setInUse:;
- (long long)status;
- (unsigned long long)count;
- (id)loadTime;
- (BOOL)isEqual:;
- (void)setReuseIdentifier:;
- (BOOL)didShow;
- (BOOL)hasCompletion;
- (id)packageID;
- (void)setPackageID:;
- (id)mediaName;
- (void)setAdapter:;
- (id)linkID;
- (void)setLinkID:;
- (void)setIsInvalid:;
- (void)setLookupID:;
- (id)lookupID;
- (id)ad;
- (void)setAdType:;
- (void)setAid:;
- (id)aid;
- (void)removeTag:;
- (BOOL)containsTag:;
+ (id)convertFromPackage:;
+ (id)packageWithMediaRitId:adapter:andAd:;
@end
