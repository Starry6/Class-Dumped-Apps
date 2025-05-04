@interface AWEStudioPortraitImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)getPortraitAsFloat:defaultValue:;
- (id)getPortraitAsDictionary:defaultValue:;
- (void)p_checkKey:;
- (double)getPortraitAsDouble:defaultValue:;
- (int)getPortraitAsInt:defaultValue:;
- (long long)getPortraitAsLong:defaultValue:;
- (BOOL)getPortraitAsBool:defaultValue:;
- (id)getPortraitAsArray:defaultValue:;
@end
