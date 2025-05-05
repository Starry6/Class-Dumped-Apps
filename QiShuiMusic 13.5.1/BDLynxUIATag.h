@interface BDLynxUIATag : LynxUI
@property (nonatomic) NSString href;
@property (nonatomic) NSString paramsString;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString label;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q index;
- (void)openHref;
- (id)paramsString;
- (void)setHref:requestReset:;
- (void)setIdentifier:requestReset:;
- (void)setIndex:requestReset:;
- (void)setLabel:requestReset:;
- (void)setParams:requestReset:;
- (void)setParamsString:requestReset:;
- (id)href;
- (id)identifier;
- (id)label;
- (unsigned long long)index;
- (void).cxx_destruct;
- (id)params;
- (id)createView;
+ (id)__lynx_prop_config__440;
+ (id)__lynx_prop_config__491;
+ (id)__lynx_prop_config__542;
+ (id)__lynx_prop_config__593;
+ (id)__lynx_prop_config__644;
+ (id)__lynx_prop_config__695;
@end
