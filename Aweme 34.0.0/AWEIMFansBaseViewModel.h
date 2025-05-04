@interface AWEIMFansBaseViewModel : NSObject
@property (nonatomic) <AWEIMFansMessage> delegate;
@property (nonatomic) AWEIMFansContainerViewModel container;
- (void)setContainer:;
- (id)container;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
