@interface ICUpdateAutomaticDownloadMediaKindsRequest : ICRequestOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)execute;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:completion:;
- (void)handleDialogRequest:completion:;
- (id)initWithRequestContext:mediaKindsToAdd:mediaKindsToRemove:;
+ (id)automaticDownloadMediaKindsForMusic;
@end
