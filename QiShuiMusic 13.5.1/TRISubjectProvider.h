@interface TRISubjectProvider : NSObject
- (id)subject;
- (BOOL)save;
- (id)initWithCoder:;
- (id)subjectWithProjectId:;
- (void)decodeWithCoder:guardedData:;
- (id)nextRotationDate;
- (void)encodeWithCoder:;
- (BOOL)loadUsingGuardedData:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)anchorDate;
- (id)nextRotationDateAfter:;
- (void)encodeWithCoder:guardedData:;
- (void)rotateSubject;
- (unsigned long long)numberOfWeeksPerRotation;
- (void)setNextRotationDate:;
+ (id)defaultProviderWithPaths:;
+ (BOOL)supportsSecureCoding;
@end
