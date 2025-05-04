@interface AWEShareWebViewModel : NSObject
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString webViewType;
@property (nonatomic) NSString previousPage;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEShareWebMetadataModel metadata;
@property (nonatomic) @? completionBlock;
- (id)aweme;
- (void)setAweme:;
- (void)setWebViewType:;
- (id)webViewType;
- (void)setGroupID:;
- (void)setMetadata:;
- (id)groupID;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)metadata;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
