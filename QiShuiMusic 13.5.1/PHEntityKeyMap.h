@interface PHEntityKeyMap : NSObject
- (id)propertyKeyForEntityKey:;
- (id)initWithPropertyKeysByEntityKey:;
- (void).cxx_destruct;
- (id)entityKeyForPropertyKey:;
+ (id)transposePropertyKeysByEntityKey:;
+ (void)assertPropertyKey:doesNotExistForEntityKey:inEntityKeysByProperty:;
@end
