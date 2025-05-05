@interface PLBuildVersion : NSObject
@property (nonatomic) NSString stringRepresentation;
@property (nonatomic) q majorBuildNumber;
@property (nonatomic) NSString majorBuildLetterString;
@property (nonatomic) q minorBuildNumber;
@property (nonatomic) NSString minorBuildLetterString;
- (long long)majorBuildNumber;
- (id)stringRepresentation;
- (long long)minorBuildNumber;
- (id)initWithString:;
- (void).cxx_destruct;
- (id)description;
- (id)minorBuildLetterString;
- (id)majorBuildLetterString;
- (long long)compareBuildVersion:withPrecision:;
- (long long)compareBuildVersionString:withPrecision:;
+ (id)currentBuildVersionString;
@end
