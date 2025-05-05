@interface IESLiveSaaSAssertionHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleFailureInMethod:object:file:lineNumber:description:;
- (void)handleFailureInFunction:file:lineNumber:description:;
+ (id)releaseAssertionHandler;
+ (void)setReleaseAssertionHandler:;
+ (BOOL)enable;
+ (void)setEnable:;
@end
