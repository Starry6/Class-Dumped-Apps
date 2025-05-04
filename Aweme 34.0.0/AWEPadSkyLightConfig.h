@interface AWEPadSkyLightConfig : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) q skyLightType;
@property (nonatomic) q contentContainerType;
@property (nonatomic) NSString skyLightResourcePath;
@property (nonatomic) NSString contentResourcePath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (BOOL)updateConfigWithPath:;
- (void)setContentContainerType:;
- (void)setContentResourcePath:;
- (void)setSkyLightType:;
- (void)setSkyLightResourcePath:;
- (long long)skyLightType;
- (long long)contentContainerType;
- (id)skyLightResourcePath;
- (id)contentResourcePath;
- (void).cxx_destruct;
@end
