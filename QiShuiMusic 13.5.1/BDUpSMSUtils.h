@interface BDUpSMSUtils : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary commparameter;
@property (nonatomic) NSDictionary postParameters;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSInteger count;
@property (nonatomic) @? callback;
- (void)addTimer;
- (id)commparameter;
- (id)postParameters;
- (void)repeatAction;
- (void)setCommparameter:;
- (void)setPostParameters:;
- (void)setHeader:;
- (id)callback;
- (void)setCount:;
- (void)setCallback:;
- (id)url;
- (id)init;
- (void)setUrl:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (id)header;
- (int)count;
+ (id)shareInstance;
@end
