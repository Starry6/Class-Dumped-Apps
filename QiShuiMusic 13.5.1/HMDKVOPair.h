@interface HMDKVOPair : NSObject
@property (nonatomic) NSObject HMDObserver;
@property (nonatomic) # HMDObserverClass;
@property (nonatomic) ^v HMDObserverPtr;
@property (nonatomic) Q HMDObserverSize;
@property (nonatomic) NSString HMDKeyPath;
@property (nonatomic) Q HMDOption;
@property (nonatomic) ^v HMDContext;
@property (nonatomic) BOOL actived;
@property (nonatomic) BOOL crashed;
- (unsigned long long)HMDObserverSize;
- (Class)HMDObserverClass;
- (unsigned long long)HMDOption;
- (id)HMDContext;
- (id)HMDKeyPath;
- (id)HMDObserver;
- (id)HMDObserverPtr;
- (void)activeWithObservee:;
- (void)deactiveWithObservee:;
- (id)initWithObserver:keypath:options:context:;
- (BOOL)isActived;
- (BOOL)isCrashed;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
@end
