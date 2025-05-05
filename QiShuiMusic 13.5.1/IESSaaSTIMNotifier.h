@interface IESSaaSTIMNotifier : NSObject
@property (nonatomic) IESSaaSTIMMulticastDelegate observerMulticast;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addWeakDelegate:onQueue:;
- (id)observerMulticast;
- (void)removeDelegateWithIdentifier:;
- (void)setObserverMulticast:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
