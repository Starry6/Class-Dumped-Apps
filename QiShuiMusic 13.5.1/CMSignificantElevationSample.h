@interface CMSignificantElevationSample : NSObject
@property (nonatomic) Q recordId;
@property (nonatomic) NSUUID sourceId;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSNumber elevationAscended;
@property (nonatomic) NSNumber elevationDescended;
- (id)startDate;
- (void)dealloc;
- (unsigned long long)recordId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (id)initWithRecordId:sourceId:startDate:endDate:elevationAscended:elevationDescended:;
- (id)initWithSignificantElevation:;
- (id)initWithFilteredElevation:;
- (id)elevationAscended;
- (id)elevationDescended;
+ (BOOL)supportsSecureCoding;
@end
