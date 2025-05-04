@interface AWESharkContainerLynxUI : LynxUI
@property (nonatomic) NSString schema;
@property (nonatomic) NSString initialData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initialData;
- (void)setInitialData:;
- (void)onContainerStartLoadWithSchema:;
- (void)onContainerLoadFinished:;
- (void)onCardStartLoadWithCardUrl:;
- (void)onCardLoadFinished:card:;
- (void)setScheme:requestReset:;
- (void)setInitData:requestReset:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)createView;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__331;
+ (id)__lynx_prop_config__432;
@end
