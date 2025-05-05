@interface NWNetworkOfInterestClientProxy : NSObject
@property (nonatomic) <SFClientInterfaceProxy> delegate;
- (void)setDelegate:;
- (void)updateNOI:keyPath:change:;
- (void)haveNOIs:tornDown:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
