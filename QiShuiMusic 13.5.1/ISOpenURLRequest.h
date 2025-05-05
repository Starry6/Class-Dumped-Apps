@interface ISOpenURLRequest : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString URLBagKey;
@property (nonatomic) BOOL interruptsKeybagRefresh;
@property (nonatomic) BOOL ITunesStoreURL;
@property (nonatomic) NSString targetIdentifier;
- (void)setURLBagKey:;
- (id)init;
- (id)initWithURL:;
- (id)targetIdentifier;
- (void)setTargetIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (id)URLBagKey;
- (void)setITunesStoreURL:;
- (id)initWithURLBagKey:;
- (BOOL)interruptsKeybagRefresh;
- (void)setInterruptsKeybagRefresh:;
- (BOOL)isITunesStoreURL;
+ (id)openURLRequestWithURL:;
@end
