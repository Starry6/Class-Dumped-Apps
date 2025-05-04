@interface AWEFurionSettingsDIHelper : NSObject
@property (nonatomic) <AWEAppSettingGetterProtocol> handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)boolValueForKeyPath:defaultValue:stable:;
- (BOOL)boolValueForKeyPath:defaultValue:;
- (id)dictionaryForKeyPath:defaultValue:stable:;
- (id)dictionaryForKeyPath:defaultValue:;
- (id)stringForKeyPath:defaultValue:;
- (long long)intValueForKeyPath:defaultValue:;
- (id)stringForKeyPath:defaultValue:stable:;
- (id)arrayForKeyPath:defaultValue:;
- (long long)intValueForKeyPath:defaultValue:stable:;
- (id)objectForKeyPath:defaultValue:stable:;
- (id)arrayForKeyPath:defaultValue:stable:;
- (double)doubleValueForKeyPath:defaultValue:stable:;
- (id)objectForKeyPath:defaultValue:;
- (double)doubleValueForKeyPath:defaultValue:;
- (void)setHandler:;
- (id)init;
- (id)handler;
- (void).cxx_destruct;
@end
