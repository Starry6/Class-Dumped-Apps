@interface CPLEngineScopeFlagsUpdate : NSObject
@property (nonatomic) q updatedFlagsMask;
@property (nonatomic) q flags;
@property (nonatomic) BOOL hasFlagUpdates;
@property (nonatomic) NSArray arrayDescription;
- (id)init;
- (BOOL)hasFlagUpdates;
- (id)redactedDescription;
- (void)setValue:forFlag:;
- (BOOL)valueForFlag:;
- (void)updateFlags:;
- (long long)updatedFlagsMask;
- (long long)updatedFlagsFromFlags:;
- (id)description;
- (id)arrayDescription;
- (long long)flags;
- (void)updateFlags:withFlagsValue:;
- (id)initWithFlags:;
+ (id)descriptionForFlags:;
+ (id)flagsDescriptionMapping;
+ (id)_arrayDescriptionForFlags:remainingFlags:;
@end
