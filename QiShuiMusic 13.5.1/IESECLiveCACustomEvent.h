@interface IESECLiveCACustomEvent : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary customParams;
- (id)customParams;
- (void)setCustomParams:;
- (void)setEvent:;
- (id)event;
- (void).cxx_destruct;
@end
