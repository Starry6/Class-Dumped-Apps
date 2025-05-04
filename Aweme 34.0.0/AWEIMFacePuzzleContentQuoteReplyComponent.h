@interface AWEIMFacePuzzleContentQuoteReplyComponent : AWEIMFacePuzzleContentComponent
@property (nonatomic) AWEIMFacePuzzleMessage message;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)initPresenter;
- (void)initProps;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
- (void)setMessage:;
+ (BOOL)canCreateComponentWithContext:;
@end
