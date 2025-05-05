@interface EDWebContentParserState : NSObject
@property (nonatomic) NSURL baseURL;
@property (nonatomic) EFPromise dataDetectionPromise;
@property (nonatomic) EFPromise remoteContentPromise;
@property (nonatomic) EFPromise richLinkPromise;
- (void)setBaseURL:;
- (id)baseURL;
- (void).cxx_destruct;
- (id)dataDetectionPromise;
- (void)setDataDetectionPromise:;
- (id)remoteContentPromise;
- (void)setRemoteContentPromise:;
- (id)richLinkPromise;
- (void)setRichLinkPromise:;
@end
