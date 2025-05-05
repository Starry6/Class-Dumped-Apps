@interface CHRecognitionSessionVersion : NSObject
@property (nonatomic) q sessionVersion;
@property (nonatomic) q sessionResultVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSessionVersion:sessionResultVersion:;
- (BOOL)isValidSessionVersion;
- (BOOL)isValidSessionResultVersion;
- (long long)sessionVersion;
- (long long)sessionResultVersion;
+ (BOOL)supportsSecureCoding;
@end
