@interface AWELiveAnchorShareRedEnvelopeChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (id)shareImage;
- (id)commonParams:;
- (void)shareItem:willAppear:;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
@end
