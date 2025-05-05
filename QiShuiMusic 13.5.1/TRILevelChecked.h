@interface TRILevelChecked : NSObject
- (long long)longValue;
- (int)intValue;
- (float)floatValue;
- (id)fileValue;
- (id)init;
- (id)initWithLevel:;
- (double)doubleValue;
- (id)stringValue;
- (id)binaryValue;
- (void).cxx_destruct;
- (id)directoryValue;
- (id)description;
- (id)forwardingTargetForSelector:;
- (BOOL)booleanValue;
+ (id)wrapLevel:;
@end
