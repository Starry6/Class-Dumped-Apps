@interface TMPermissionManager : NSObject
@property (nonatomic) TSPKEventData lastRequestPermissionEventData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)hanleEvent:;
- (id)lastRequestPermissionEventData;
- (void)setLastRequestPermissionEventData:;
- (id)uniqueId;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
