@interface PFUbiquityGlobalObjectIDCache : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithLocalPeerID:forStoreName:;
+ (id)stringValueFromArray:atIndexDescribedByStringNumber:;
@end
