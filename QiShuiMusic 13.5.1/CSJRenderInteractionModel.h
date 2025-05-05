@interface CSJRenderInteractionModel : NSObject
@property (nonatomic) q renderInteractionType;
@property (nonatomic) CSJRenderClickEventModel renderClickEventModel;
@property (nonatomic) NSDictionary js2NativeParams;
@property (nonatomic) NSDictionary native2JSParams;
- (id)js2NativeParams;
- (id)native2JSParams;
- (id)renderClickEventModel;
- (long long)renderInteractionType;
- (void)setJs2NativeParams:;
- (void)setNative2JSParams:;
- (void)setRenderClickEventModel:;
- (void)setRenderInteractionType:;
- (void).cxx_destruct;
@end
