@interface CSJDynamicCreativeAppModel : NSObject
@property (nonatomic) NSString app_name;
@property (nonatomic) q app_size;
@property (nonatomic) NSString appleid;
@property (nonatomic) q comment_num;
@property (nonatomic) NSString download_url;
@property (nonatomic) NSString package_name;
@property (nonatomic) double score;
- (id)appleid;
- (void)setComment_num:;
- (id)app_name;
- (long long)app_size;
- (long long)comment_num;
- (id)download_url;
- (id)package_name;
- (void)setApp_name:;
- (void)setApp_size:;
- (void)setAppleid:;
- (void)setDownload_url:;
- (void)setPackage_name:;
- (double)score;
- (id)initWithDictionary:;
- (void)setScore:;
- (void).cxx_destruct;
@end
