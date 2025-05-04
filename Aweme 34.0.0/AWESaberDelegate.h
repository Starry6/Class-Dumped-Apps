@interface AWESaberDelegate : NSObject
- (void)registerApplogDataChannelWithCallback:;
- (void)trackWithEvent:params:;
- (BOOL)boolValueForKey:defaultValue:;
- (id)dictionaryValueForKey:;
@end
