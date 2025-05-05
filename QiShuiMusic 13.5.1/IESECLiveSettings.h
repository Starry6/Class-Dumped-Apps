@interface IESECLiveSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)arrayForKey:defaultValue:freeze:;
- (id)dictionaryForKey:defaultValue:freeze:;
- (id)numberForKey:defaultValue:freeze:;
- (id)stringForKey:defaultValue:freeze:;
- (id)valueForKey:defaultValue:freeze:;
- (id)dictionaryForKey:defaultValue:;
- (id)numberForKey:;
- (id)stringForKey:;
- (id)numberForKey:defaultValue:;
- (id)stringForKey:defaultValue:;
- (id)arrayForKey:;
- (id)dictionaryForKey:;
- (id)arrayForKey:defaultValue:;
+ (id)settings;
@end
