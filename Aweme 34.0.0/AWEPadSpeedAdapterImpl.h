@interface AWEPadSpeedAdapterImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableGlobalSpeedInherit;
- (id)getPadSpeedManagerWithReferString:enterFrom:;
- (BOOL)performNormalExecution:;
- (id)init;
+ (id)sharedAdapter;
@end
