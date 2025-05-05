@interface VCMediaNegotiatorResultsCaptions : NSObject
@property (nonatomic) BOOL remoteCanDisplayCaptions;
@property (nonatomic) NSSet localLanguages;
@property (nonatomic) NSSet remoteLanguages;
- (void)dealloc;
- (id)localLanguages;
- (void)setLocalLanguages:;
- (id)remoteLanguages;
- (void)setRemoteLanguages:;
- (BOOL)remoteCanDisplayCaptions;
- (void)setRemoteCanDisplayCaptions:;
@end
