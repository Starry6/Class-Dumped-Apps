@interface LPLinkHTMLTextGenerator : NSObject
@property (nonatomic) <LPLinkHTMLTextGeneratorDelegate> delegate;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (nonatomic) LPLinkMetadata metadata;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString HTMLFragmentString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithURL:;
- (void)setDelegate:;
- (id)metadata;
- (void)setMetadata:;
- (id)delegate;
- (void).cxx_destruct;
- (id)URL;
- (id)initWithPresentationProperties:URL:;
- (id)HTMLFragmentString;
- (id)linkHTMLGenerator:URLForResource:withMIMEType:;
- (void)setGenerateEmailCompatibleMarkup:;
- (BOOL)generateEmailCompatibleMarkup;
- (void)_commonInitWithPresentationProperties:URL:;
@end
