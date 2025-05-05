@interface CVAPortraitGenericRequestImpl : NSObject
@property (nonatomic) <CVABackgroundRequest> background;
@property (nonatomic) <CVALightRequest> light;
@property (nonatomic) <CVAPostProcessingRequest> post;
@property (nonatomic) BOOL isTmpConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)background;
- (void)setBackground:;
- (void).cxx_destruct;
- (id)light;
- (void)setPost:;
- (id)post;
- (void)setLight:;
- (BOOL)isTmpConfig;
- (void)setIsTmpConfig:;
@end
