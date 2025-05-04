@interface AWEUserProtocolPopViewModel : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) NSArray linkArray;
@property (nonatomic) NSArray urlArray;
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) NSString buttonText;
@property (nonatomic) q popViewStyle;
@property (nonatomic) NSString title;
- (id)urlArray;
- (void)setUrlArray:;
- (id)linkArray;
- (long long)popViewStyle;
- (void)setPopViewStyle:;
- (void)setLinkArray:;
- (void)updateTextWithPopViewStyle:carrierServiceString:;
- (void)modifyContentWithPopViewStyle:;
- (id)aAWEUserModuleAgreementInfoCommonAdapter;
- (void)setText:;
- (id)text;
- (id)buttonText;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setButtonText:;
- (void)setTrackInfo:;
- (id)trackInfo;
+ (id)createDefaultModel;
+ (Class)aAWEUserModuleAgreementInfoCommonAdapterClass;
@end
