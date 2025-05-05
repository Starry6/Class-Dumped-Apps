@interface GEOMapDataSubscriptionState : NSObject
@property (nonatomic) q loadState;
@property (nonatomic) NSProgress downloadProgress;
@property (nonatomic) NSError lastError;
@property (nonatomic) Q downloadedDataCount;
@property (nonatomic) Q downloadedDataSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadProgress;
- (void)_commonInit;
- (id)init;
- (long long)loadState;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (void).cxx_destruct;
- (id)lastError;
- (unsigned long long)downloadedDataCount;
- (unsigned long long)downloadedDataSize;
@end
