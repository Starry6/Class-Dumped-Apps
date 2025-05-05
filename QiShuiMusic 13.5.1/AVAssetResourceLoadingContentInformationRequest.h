@interface AVAssetResourceLoadingContentInformationRequest : NSObject
@property (nonatomic) NSString contentType;
@property (nonatomic) NSArray allowedContentTypes;
@property (nonatomic) q contentLength;
@property (nonatomic) BOOL byteRangeAccessSupported;
@property (nonatomic) NSDate renewalDate;
@property (nonatomic) BOOL entireLengthAvailableOnDemand;
- (id)propertyList;
- (void)setContentType:;
- (id)init;
- (id)initWithLoadingRequest:allowedContentTypes:;
- (void)dealloc;
- (void)setEntireLengthAvailableOnDemand:;
- (void)setContentLength:;
- (id)contentType;
- (id)allowedContentTypes;
- (id)renewalDate;
- (BOOL)isDiskCachingPermitted;
- (BOOL)isByteRangeAccessSupported;
- (void)setByteRangeAccessSupported:;
- (void)setRenewalDate:;
- (BOOL)isEntireLengthAvailableOnDemand;
- (id)description;
- (long long)contentLength;
- (void)setDiskCachingPermitted:;
@end
