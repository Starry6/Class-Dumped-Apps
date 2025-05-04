@interface AWEStudioVideoCutService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (BOOL)isVideocutInstalled;
- (id)anchorZlinkFor:;
- (void)tryOpenVideoCutWithSchema:awemeID:zlink:tokenURL:tokenCert:useNewAttri:;
- (id)videoCutSameMockSDKVersion;
- (void)routerToVideoCuteApplicationURL:;
- (void)trackVideoCutDownLoadForAwemeID:zlink:;
- (void)presentVideoCutStorePageIn:;
- (id)getShareTokenFrom:;
- (void)trackVideoCutDownLoadForAwemeID:isTemplate:;
@end
