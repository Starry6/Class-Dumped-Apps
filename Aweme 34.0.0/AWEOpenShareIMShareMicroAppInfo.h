@interface AWEOpenShareIMShareMicroAppInfo : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString path;
@property (nonatomic) NSString thumbUrl;
@property (nonatomic) NSNumber microAppType;
@property (nonatomic) NSString thirdAppSchema;
- (id)thumbUrl;
- (void)setThumbUrl:;
- (id)thirdAppSchema;
- (void)setThirdAppSchema:;
- (id)microAppType;
- (void)setMicroAppType:;
- (id)path;
- (id)appId;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setPath:;
- (void)setAppId:;
@end
