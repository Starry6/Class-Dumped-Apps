@interface ARAppClipCodeResult : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) {?=[4]} codeToWorldVisionTransform;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL isScaleReliable;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) q urlDecodingStateInternal;
@property (nonatomic) Q urlEncodingVersion;
- (float)confidence;
- (id)url;
- (void)setConfidence:;
- (id)initWithCoder:;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)copyWithZone:;
- (id)size;
- (long long)urlDecodingStateInternal;
- (void)setUrlDecodingStateInternal:;
- (BOOL)isScaleReliable;
- (void)setIsScaleReliable:;
- (unsigned long long)urlEncodingVersion;
- (void)setUrlEncodingVersion:;
- (id)codeToWorldVisionTransform;
- (void)setCodeToWorldVisionTransform:;
+ (BOOL)supportsSecureCoding;
@end
