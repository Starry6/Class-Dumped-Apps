@interface AWEElementRightRemotePlayFilterStrategy : NSObject
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterElements:context:buildContext:;
- (long long)priority;
+ (BOOL)activateWithContext:;
@end
