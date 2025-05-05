@interface CIFilterClassInfo : NSObject
- (id)init;
- (void)dealloc;
- (id)outputKeys;
- (id)inputClasses;
- (id)inputKeys;
- (id)description;
- (id)initWithClass:;
+ (id)classInfoForClass:;
@end
