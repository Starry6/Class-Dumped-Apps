@interface AWEWebViewPIAHostSettingsProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pia_objectValueForKey:;
- (BOOL)pia_boolValueForKey:defaultValue:;
- (long long)pia_integerValueForKey:defaultValue:;
- (float)pia_floatValueForKey:defaultValue:;
- (id)pia_dictionaryValueForKey:;
- (id)pia_stringValueForKey:;
- (id)pia_arrayValueForKey:;
+ (id)sharedInstance;
@end
