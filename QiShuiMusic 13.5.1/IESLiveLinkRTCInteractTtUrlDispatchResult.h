@interface IESLiveLinkRTCInteractTtUrlDispatchResult : NSObject
@property (nonatomic) NSString finalUrl;
@property (nonatomic) NSString userRegion;
@property (nonatomic) NSString ePoc;
@property (nonatomic) NSString eTag;
- (id)ePoc;
- (id)finalUrl;
- (void)setEPoc:;
- (void)setFinalUrl:;
- (void)setUserRegion:;
- (id)userRegion;
- (id)eTag;
- (void)setETag:;
- (void).cxx_destruct;
@end
