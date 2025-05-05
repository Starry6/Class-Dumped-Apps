@interface IESECAPTALogPlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receive:pathID:;
- (BOOL)alogSwitch;
- (id)moduleNamePrefixWithLogNode:;
- (void)receive:;
@end
