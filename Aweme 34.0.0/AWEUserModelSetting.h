@interface AWEUserModelSetting : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)boolValueForKeyPath:defaultValue:stable:;
- (BOOL)boolValueForKeyPath:defaultValue:;
- (id)dictionaryForKeyPath:defaultValue:;
- (long long)intValueForKeyPath:defaultValue:;
- (id)arrayForKeyPath:defaultValue:;
@end
