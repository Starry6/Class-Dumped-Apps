@interface AWESearchClientTagsManager : NSObject
@property (nonatomic) NSString currentSearchID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSMutableArray uploadedTags;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)initWithEnterFrom:;
- (void)uploadTags:forSearchID:;
- (void)reportDocIDListWithRawData:;
- (id)currentSearchID;
- (void)setCurrentSearchID:;
- (id)uploadedTags;
- (void)setUploadedTags:;
- (void).cxx_destruct;
@end
