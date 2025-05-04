@interface AWEPostPageTitleTemplateHandler : NSObject
@property (nonatomic) q titleTemplateClickSignal;
@property (nonatomic) NSString titleTemplateSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)sendTitleTemplateClickSignal:;
- (void)sendTitleTemplateSignal:;
- (long long)titleTemplateClickSignal;
- (id)titleTemplateSignal;
- (void)setTitleTemplateSignal:;
- (void)setTitleTemplateClickSignal:;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
