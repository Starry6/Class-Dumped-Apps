@interface BSBuildVersion : NSObject
@property (nonatomic) q majorBuildNumber;
@property (nonatomic) NSString majorBuildLetterString;
@property (nonatomic) q minorBuildNumber;
@property (nonatomic) NSString minorBuildLetterString;
@property (nonatomic) NSString stringRepresentation;
- (BOOL)isSameAs:;
- (long long)majorBuildNumber;
- (id)init;
- (id)stringRepresentation;
- (long long)minorBuildNumber;
- (id)initWithString:;
- (BOOL)isBefore:;
- (unsigned long long)hash;
- (long long)_compareAgainstBuildVersion:withPrecision:;
- (BOOL)isBefore:withPrecision:;
- (BOOL)isAfter:withPrecision:;
- (void).cxx_destruct;
- (id)description;
- (id)minorBuildLetterString;
- (BOOL)isSameAs:withPrecision:;
- (id)majorBuildLetterString;
- (BOOL)isEqual:;
- (BOOL)isAfter:;
+ (id)fromString:;
@end
