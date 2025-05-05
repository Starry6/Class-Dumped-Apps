@interface WKObservablePageState : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSURL URL;
@property (nonatomic) BOOL loading;
@property (nonatomic) double estimatedProgress;
@property (nonatomic) BOOL hasOnlySecureContent;
@property (nonatomic) BOOL _webProcessIsResponsive;
@property (nonatomic) NSURL unreachableURL;
@property (nonatomic) ^{__SecTrust=} serverTrust;
- (double)estimatedProgress;
- (BOOL)isLoading;
- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)URL;
- (id)serverTrust;
- (id)initWithPage:;
- (BOOL)hasOnlySecureContent;
- (BOOL)_webProcessIsResponsive;
- (id)unreachableURL;
@end
