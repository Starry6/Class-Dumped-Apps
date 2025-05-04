@interface AWESECLegacyAbilities : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)boolValueForKeyPath:defaultValue:;
- (void)trackEvent:params:;
- (id)dictionaryForKeyPath:defaultValue:;
- (BOOL)transferToURLString:;
- (id)stringForKeyPath:defaultValue:;
- (long long)intValueForKeyPath:defaultValue:;
- (id)arrayForKeyPath:defaultValue:;
- (double)doubleValueForKeyPath:defaultValue:;
- (void)log:content:;
- (void)setup;
@end
