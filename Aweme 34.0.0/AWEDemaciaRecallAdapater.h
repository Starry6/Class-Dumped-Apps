@interface AWEDemaciaRecallAdapater : NSObject
@property (nonatomic) BOOL isResourceRecallEnabled;
@property (nonatomic) NSDictionary lastRecallMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addObserver:handler:;
- (void)registerByteSync;
- (BOOL)isResourceRecallEnabled;
- (id)lastRecallMessage;
- (void)removeObserver:;
@end
