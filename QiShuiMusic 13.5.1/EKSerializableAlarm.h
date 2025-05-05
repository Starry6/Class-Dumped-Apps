@interface EKSerializableAlarm : EKSerializableObject
@property (nonatomic) NSNumber relativeOffset;
@property (nonatomic) NSDate absoluteDate;
@property (nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isDefaultAlarm;
- (void)setIsDefaultAlarm:;
- (id)absoluteDate;
- (void)setRelativeOffset:;
- (BOOL)isAbsolute;
- (id)relativeOffset;
- (void).cxx_destruct;
- (void)setAbsoluteDate:;
- (BOOL)isDefaultAlarm;
- (id)initWithAlarm:;
- (id)createAlarm:;
- (void)setIsAbsolute:;
+ (id)classesForKey;
@end
