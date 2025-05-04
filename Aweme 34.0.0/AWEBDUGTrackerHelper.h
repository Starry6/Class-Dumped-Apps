@interface AWEBDUGTrackerHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)event:params:;
+ (id)sharedInstance;
@end
