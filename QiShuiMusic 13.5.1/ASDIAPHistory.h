@interface ASDIAPHistory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:;
- (void)getAllIAPsForActiveAccountWithResultHandler:;
- (void).cxx_destruct;
- (void)getIAPsForActiveAccountWithAdamIDs:withResultHandler:;
+ (id)interface;
+ (id)sharedInstance;
@end
