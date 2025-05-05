@interface CMMetMinute : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSNumber averageIntensity;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSample:;
- (id)initWithStartDate:averageIntensity:;
- (id)averageIntensity;
+ (BOOL)supportsSecureCoding;
@end
