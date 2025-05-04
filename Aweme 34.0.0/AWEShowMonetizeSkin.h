@interface AWEShowMonetizeSkin : NSObject
@property (nonatomic) NSDictionary skinConfigResponse;
@property (nonatomic) NSDictionary skinConfigsBySkinKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getSkinConfigWithKey:completion:;
- (id)skinConfigResponse;
- (id)skinConfigsBySkinKey;
- (void)handleSkinConfigResponse:;
- (void)setSkinConfigResponse:;
- (void)setSkinConfigsBySkinKey:;
- (id)getSkinConfigFromLocalWithKey:;
- (void)setSkinConfigResponseFromFE:;
- (void).cxx_destruct;
@end
