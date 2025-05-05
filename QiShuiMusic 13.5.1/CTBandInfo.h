@interface CTBandInfo : NSObject
@property (nonatomic) NSMutableDictionary fActiveBands;
@property (nonatomic) NSMutableDictionary fSupportedBands;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithActiveBands:;
- (id)initWithSupportedBands:;
- (id)initWithSupported:andActiveBands:;
- (BOOL)addActiveBand:forRat:;
- (BOOL)addActiveBands:forRat:;
- (BOOL)addSupportedBand:forRat:;
- (BOOL)addSupportedBands:forRat:;
- (id)activeBands;
- (id)activeBandsForRat:;
- (id)supportedBands;
- (id)supportedBandsForRat:;
- (id)fActiveBands;
- (void)setFActiveBands:;
- (id)fSupportedBands;
- (void)setFSupportedBands:;
+ (BOOL)supportsSecureCoding;
@end
