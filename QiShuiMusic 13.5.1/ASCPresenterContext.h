@interface ASCPresenterContext : NSObject
@property (nonatomic) ASCArtworkFetcher artworkFetcher;
@property (nonatomic) ASCLockupFetcher lockupFetcher;
@property (nonatomic) ASCAppOfferStateCenter appOfferStateCenter;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)lockupFetcher;
- (id)initWithArtworkFetcher:lockupFetcher:appOfferStateCenter:;
- (id)artworkFetcher;
- (id)appOfferStateCenter;
+ (id)sharedContext;
@end
