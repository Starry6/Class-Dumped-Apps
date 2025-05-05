@interface AWEShareWebViewModel : NSObject
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString webViewType;
@property (nonatomic) NSString previousPage;
@property (nonatomic) IESIMAwemeModel aweme;
@property (nonatomic) AWEShareWebMetadataModel metadata;
- (void)setWebViewType:;
- (id)aweme;
- (void)setAweme:;
- (id)webViewType;
- (void)setGroupID:;
- (id)groupID;
- (id)metadata;
- (void)setMetadata:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
