@interface __AWERTVFeedContentControllers : NSObject
@property (nonatomic) <RTVXRControllerInjector> controllerInjector;
@property (nonatomic) NSMapTable cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getInstance:;
- (id)controllerInjector;
- (id)getController:;
- (id)getControllerForKey:;
- (id)getControllerWithProtocol:;
- (void)registerController:forProtocol:;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
@end
