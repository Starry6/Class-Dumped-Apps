@interface WBSUserDefaultObservation : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithUserDefaults:key:queue:notifyForInitialValue:handler:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)invalidate;
@end
