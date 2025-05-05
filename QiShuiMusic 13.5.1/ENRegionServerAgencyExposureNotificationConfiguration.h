@interface ENRegionServerAgencyExposureNotificationConfiguration : NSObject
@property (nonatomic) NSString classificationName;
@property (nonatomic) NSURL classificationURL;
@property (nonatomic) NSString localizedExposureDetailBody;
@property (nonatomic) NSString localizedNotificationSubject;
@property (nonatomic) NSString localizedNotificationBody;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)localizedExposureDetailBody;
- (id)localizedNotificationBody;
- (id)localizedNotificationSubject;
- (id)classificationName;
- (id)classificationURL;
+ (BOOL)supportsSecureCoding;
+ (BOOL)getNotificationConfiguration:fromDictionary:locale:index:;
@end
