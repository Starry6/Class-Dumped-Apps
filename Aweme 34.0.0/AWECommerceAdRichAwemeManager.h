@interface AWECommerceAdRichAwemeManager : NSObject
@property (nonatomic) <AWEAdRichAwemeStatusProtocol> statusManager;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)enterWithInteractionViewController:model:;
- (BOOL)isRichAwemeManuallySlide:;
- (id)aAWECommerceAdRichAwemeManagerCommonAdapter;
- (id)aAWECommerceAdRichAwemeManagerDOUYINLiteAdapter;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (void)leave;
- (void)setStatusManager:;
- (id)statusManager;
+ (BOOL)feedCanAutoPlayWithPresentedViewController:;
+ (unsigned long long)albumSlideAutoReplayInAdRichAweme:;
+ (Class)aAWECommerceAdRichAwemeManagerCommonAdapterClass;
+ (Class)aAWECommerceAdRichAwemeManagerDOUYINLiteAdapterClass;
@end
