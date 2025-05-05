@interface MRMediaSuggestionController : NSObject
@property (nonatomic) <MRMediaSuggestionControllerDelegate> delegate;
@property (nonatomic) MRMediaSuggestionRequest request;
@property (nonatomic) NSDictionary suggestions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (void)dealloc;
- (void)applicationsDidInstall:;
- (void)applicationsDidUninstall:;
- (void)start;
- (void)setDelegate:;
- (id)suggestions;
- (void)stop;
- (id)request;
- (id)delegate;
- (void).cxx_destruct;
@end
