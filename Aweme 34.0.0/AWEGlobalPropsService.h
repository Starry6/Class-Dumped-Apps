@interface AWEGlobalPropsService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerGlobalPropsWhenLoadInMianThreadWithContainer:;
- (id)containerGlobalPropsWhenLoadWithContainer:;
- (id)containerGlobalPropsWhenLoadWihoutMainThreadWithContainer:;
- (id)containerGlobalPropsWithCardModel:;
- (void)updateScreenGlobalProps;
- (id)screenGlobalProps;
- (id)defaultGlobalPropsWithEngineType:;
- (void)injectGlobalProps:toContainer:;
- (id)dictFromGlobalProps:;
- (BOOL)shouldUpdateScreenGlobalPropsWithContainer:;
- (id)containerScreenGlobalPropsWithContainer:;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;
@end
