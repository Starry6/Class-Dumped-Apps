@interface MIDINetworkConnection : NSObject
@property (nonatomic) MIDINetworkHost host;
- (id)init;
- (void)dealloc;
- (id)host;
+ (id)connectionWithHost:;
@end
