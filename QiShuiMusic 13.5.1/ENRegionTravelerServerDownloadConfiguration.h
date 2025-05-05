@interface ENRegionTravelerServerDownloadConfiguration : NSObject
@property (nonatomic) NSURL tekTravelerDownloadBaseURL;
@property (nonatomic) NSURL tekTravelerDownloadIndexURL;
- (id)initWithServerResponseDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)tekTravelerDownloadBaseURL;
- (id)tekTravelerDownloadIndexURL;
+ (BOOL)supportsSecureCoding;
@end
