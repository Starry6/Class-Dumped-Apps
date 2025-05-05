@interface AWEShareLinkModel : NSObject
@property (nonatomic) NSString textForCopy;
@property (nonatomic) NSString textFormatForCopy;
@property (nonatomic) NSString reportUrl;
@property (nonatomic) NSString belong;
@property (nonatomic) NSString descriptionPrefix;
@property (nonatomic) BOOL shouldGetPersistentShortURL;
- (void)setShouldGetPersistentShortURL:;
- (void)setTextForCopy:;
- (id)belong;
- (id)reportUrl;
- (void)setBelong:;
- (void)setReportUrl:;
- (void)setTextFormatForCopy:;
- (BOOL)shouldGetPersistentShortURL;
- (id)textForCopy;
- (id)textFormatForCopy;
- (void)setDescriptionPrefix:;
- (id)descriptionPrefix;
- (void).cxx_destruct;
@end
