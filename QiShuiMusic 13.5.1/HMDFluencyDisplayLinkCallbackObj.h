@interface HMDFluencyDisplayLinkCallbackObj : NSObject
@property (nonatomic) BOOL isRegistered;
@property (nonatomic) NSString name;
@property (nonatomic) @? callback;
@property (nonatomic) @? becomeActiveCallback;
@property (nonatomic) @? resignActiveCallback;
- (id)becomeActiveCallback;
- (id)resignActiveCallback;
- (void)setBecomeActiveCallback:;
- (void)setResignActiveCallback:;
- (BOOL)isRegistered;
- (id)callback;
- (void)setCallback:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (void)setIsRegistered:;
@end
