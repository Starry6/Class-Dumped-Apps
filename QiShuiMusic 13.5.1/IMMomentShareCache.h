@interface IMMomentShareCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)photoLibraryDidChange:;
- (id)init;
- (void).cxx_destruct;
- (void)momentShareForURLString:completionHandler:;
- (id)momentShareForURLString:error:;
- (void)_ensureLibraryRegistration;
- (id)_momentShareForURLString:error:;
- (void)_processFetchedMomentShare:forURLString:error:completionHandlers:;
+ (id)sharedInstance;
@end
