@interface ICStoreVideoArtworkInfo : NSObject
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSString stringRepresentation;
- (id)stringRepresentation;
- (id)responseDictionary;
- (id)HLSVideoURLForAspectRatio:;
- (id)_aspectRatioKeyForAspectRatio:;
- (id)CRABSVideoURLMatchingSize:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithVideoArtworkResponseDictionary:;
- (id)supportedSizesForCRABSVideoForAspectRatio:;
- (void).cxx_destruct;
- (id)previewFrameArtworkInfoMatchingAspectRatio:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
