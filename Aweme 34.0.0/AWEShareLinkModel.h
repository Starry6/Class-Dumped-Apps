@interface AWEShareLinkModel : NSObject
@property (nonatomic) NSString textForCopy;
@property (nonatomic) NSString textFormatForCopy;
@property (nonatomic) NSString reportUrl;
@property (nonatomic) NSString belong;
@property (nonatomic) NSString descriptionPrefix;
@property (nonatomic) BOOL shouldGetPersistentShortURL;
@property (nonatomic) NSDictionary activityInfo;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setActivityInfo:;
- (void)setTextFormatForCopy:;
- (id)reportUrl;
- (id)textForCopy;
- (void)setReportUrl:;
- (id)textFormatForCopy;
- (void)setTextForCopy:;
- (void)setBelong:;
- (void)setShouldGetPersistentShortURL:;
- (id)belong;
- (BOOL)shouldGetPersistentShortURL;
- (void).cxx_destruct;
- (id)descriptionPrefix;
- (void)setDescriptionPrefix:;
- (id)activityInfo;
@end
