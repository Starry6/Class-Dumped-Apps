@interface UITextEffectsHostingInfo : NSObject
@property (nonatomic) NSDictionary perSceneOptions;
@property (nonatomic) UIWindowScene scene;
@property (nonatomic) BOOL useHostedInstance;
@property (nonatomic) UIWindowScene _intendedCanvas;
@property (nonatomic) NSDictionary _options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intendedCanvas;
- (BOOL)_matchingOptions:;
- (id)_options;
- (void)setScene:;
- (id)_initWithCanvas:options:;
- (id)scene;
- (void)setPerSceneOptions:;
- (void).cxx_destruct;
- (void)setUseHostedInstance:;
- (BOOL)useHostedInstance;
- (id)perSceneOptions;
+ (id)hostingInfoForWindowScene:;
@end
