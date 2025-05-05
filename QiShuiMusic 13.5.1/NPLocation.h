@interface NPLocation : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) double latitude;
@property (nonatomic) double longtitude;
@property (nonatomic) NSDate timestamp;
- (double)latitude;
- (id)initWithCoder:;
- (void)setLatitude:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)initWithLatitude:longtitude:timestamp:;
- (double)longtitude;
- (void)setLongtitude:;
+ (BOOL)supportsSecureCoding;
@end
