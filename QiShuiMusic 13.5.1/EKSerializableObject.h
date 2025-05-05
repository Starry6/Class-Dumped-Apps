@interface EKSerializableObject : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
+ (id)classesForKey;
@end
