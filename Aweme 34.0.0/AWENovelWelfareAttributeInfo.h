@interface AWENovelWelfareAttributeInfo : NSObject
@property (nonatomic) NSString zlink;
@property (nonatomic) NSString gdLabel;
@property (nonatomic) NSString icon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString downloadTitle;
@property (nonatomic) NSString downloadBtnText;
@property (nonatomic) NSString openSchema;
- (id)btnText;
- (id)gdLabel;
- (id)openSchema;
- (id)downloadTitle;
- (void)setDownloadTitle:;
- (void)setBtnText:;
- (void)setGdLabel:;
- (void)setOpenSchema:;
- (void)setZlink:;
- (id)zlink;
- (void)setDownloadBtnText:;
- (id)downloadBtnText;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDict:;
- (void)setTitle:;
@end
