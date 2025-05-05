@interface NSProgressValues : NSObject
- (void)setFinished:;
- (id)init;
- (void)dealloc;
- (id)overallFraction;
- (BOOL)isIndeterminate;
- (void)setIndeterminate:;
- (void)setCompletedUnitCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isFinished;
- (double)fractionCompleted;
- (void)setTotalUnitCount:;
- (id)description;
- (long long)totalUnitCount;
- (void)setFractionCompleted:;
- (long long)completedUnitCount;
- (id)_indentedDescription:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)_importantKeys;
+ (id)decodableClasses;
@end
