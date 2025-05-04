@interface AWECloudAlbumDetailComponentManager : NSObject
@property (nonatomic) <IESServiceProvider> context;
@property (nonatomic) NSArray classes;
@property (nonatomic) NSArray components;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (id)initWithContext:classes:;
- (id)classes;
- (void).cxx_destruct;
- (id)components;
- (id)context;
@end
