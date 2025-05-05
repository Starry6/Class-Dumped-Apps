@interface LynxKryptonSettings : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objectValueForKey:defaultValue:;
- (int)intValueForKey:defaultValue:;
- (BOOL)boolValueForKey:defaultValue:;
- (id)stringValueForKey:defaultValue:;
- (double)doubleValueForKey:defaultValue:;
@end
