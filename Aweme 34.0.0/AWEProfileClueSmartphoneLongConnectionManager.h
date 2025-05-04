@interface AWEProfileClueSmartphoneLongConnectionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)profileLC_didReceiveMessageObject:;
- (void)startLongConnection;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
