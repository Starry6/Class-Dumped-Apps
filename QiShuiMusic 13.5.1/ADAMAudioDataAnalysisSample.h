@interface ADAMAudioDataAnalysisSample : NSObject
@property (nonatomic) NSNumber data;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) I type;
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSUUID uuid;
- (id)dateInterval;
- (id)uuid;
- (id)data;
- (id)metadata;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initAudioSampleWithType:data:dateInterval:metadata:;
+ (BOOL)supportsSecureCoding;
@end
