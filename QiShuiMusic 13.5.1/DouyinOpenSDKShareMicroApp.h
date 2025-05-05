@interface DouyinOpenSDKShareMicroApp : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString path;
@property (nonatomic) NSString query;
@property (nonatomic) NSString imageID;
@property (nonatomic) NSString thirdAppSchema;
- (void)setThirdAppSchema:;
- (id)thirdAppSchema;
- (id)path;
- (id)appId;
- (void)setPath:;
- (void)setQuery:;
- (id)query;
- (void)setTitle:;
- (void)setAppId:;
- (id)title;
- (void).cxx_destruct;
- (id)imageID;
- (void)setImageID:;
@end
