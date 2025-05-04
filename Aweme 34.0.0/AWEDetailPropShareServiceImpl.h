@interface AWEDetailPropShareServiceImpl : NSObject
@property (nonatomic) UIViewController host;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) AWEDetailPropViewModel stateContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHost:serviceProvider:;
- (void)shareWithActionSender:;
- (void)setHost:;
- (id)host;
- (void)setProvider:;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
- (id)provider;
@end
