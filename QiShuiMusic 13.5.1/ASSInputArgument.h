@interface ASSInputArgument : NSObject
@property (nonatomic) NSString utdid;
@property (nonatomic) NSString tid;
@property (nonatomic) NSString userid;
@property (nonatomic) NSInteger envMode;
@property (nonatomic) @? callback;
- (void)setTid:;
- (void)setUtdid:;
- (id)utdid;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
- (id)tid;
- (id)userid;
- (void)setUserid:;
- (void)setEnvMode:;
- (int)envMode;
@end
