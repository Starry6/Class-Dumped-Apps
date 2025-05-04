@interface AWEUserProtocolComponent : NSObject
@property (nonatomic) AWEUserLoginProtocolView contentView;
@property (nonatomic) BOOL isShowingAlert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (void)checkConfirmedProtocolWithCompletion:;
- (id)contentView;
- (unsigned long long)componentType;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (BOOL)isShowingAlert;
- (void)setIsShowingAlert:;
@end
