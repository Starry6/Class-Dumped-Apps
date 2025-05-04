@interface AWELocalSettings : AWEBaseSettings
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIntValue:forKey:;
- (void)setDoubleValue:forKey:;
- (id)init;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setString:forKey:;
- (void)setBoolValue:forKey:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setObject:forKey:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
