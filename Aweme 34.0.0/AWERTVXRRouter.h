@interface AWERTVXRRouter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferToURLString:;
- (void)openLiveScheme:;
- (void)transferToHTTPURLString:;
- (id)targetViewControllerWithSchema:;
- (id)schemaWithHTTPURLString:;
@end
