@interface DCAppAttestService : NSObject
@property (nonatomic) BOOL supported;
- (BOOL)isSupported;
- (BOOL)_isSupportedReturningError:;
- (id)_rewrapAsDCError:;
- (id)_loadAppUUID;
- (void)generateAssertion:clientDataHash:completionHandler:;
- (void)generateKeyWithCompletionHandler:;
- (void)_saveAppUUID:;
- (void)attestKey:clientDataHash:completionHandler:;
+ (id)sharedService;
@end
