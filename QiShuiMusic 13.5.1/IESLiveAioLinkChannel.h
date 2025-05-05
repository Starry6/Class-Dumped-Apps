@interface IESLiveAioLinkChannel : NSObject
@property (nonatomic) UIView lynxView;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString method;
@property (nonatomic) NSString from;
@property (nonatomic) NSString service;
@property (nonatomic) BOOL remoteClose;
- (void)setRemoteClose:;
- (id)lynxView;
- (BOOL)remoteClose;
- (void)setLynxView:;
- (void)setService:;
- (id)tag;
- (id)method;
- (id)service;
- (void)setTag:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)from;
- (void)setFrom:;
+ (id)createChannel:method:tag:from:;
@end
