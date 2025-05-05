@interface HMDCrashModel : NSObject
- (id)postDict;
- (void)updateWithDictionary:;
- (id)initWithDictionary:;
+ (id)objectWithDictionary:;
+ (id)objectsWithDicts:;
@end
