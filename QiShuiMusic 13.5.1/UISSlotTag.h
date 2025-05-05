@interface UISSlotTag : NSObject
@property (nonatomic) BOOL valid;
- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)resolvedStyleForStyle:;
- (unsigned long long)failGradeForStyle:;
- (unsigned long long)hitTestInformationMaskForStyle:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
+ (unsigned long long)cacheLimit;
@end
