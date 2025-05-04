@interface AWEUserLoginProtocolModel : NSObject
@property (nonatomic) BOOL hasAgreedPrivacy;
@property (nonatomic) q type;
@property (nonatomic) q carrierType;
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) BOOL enableBubbleAdapter;
- (void)setCarrierType:;
- (long long)carrierType;
- (void)setHasAgreedPrivacy:;
- (BOOL)hasAgreedPrivacy;
- (void)setEnableBubbleAdapter:;
- (BOOL)enableBubbleAdapter;
- (id)init;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTrackInfo:;
- (id)trackInfo;
@end
