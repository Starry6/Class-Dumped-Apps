@interface AWEIMImageLivePhotoModel : NSObject
@property (nonatomic) NSString vid;
@property (nonatomic) NSString tkey;
@property (nonatomic) NSString skey;
@property (nonatomic) NSString md5;
@property (nonatomic) q isNewEncrypt;
- (id)skey;
- (void)setSkey:;
- (id)tkey;
- (void)setTkey:;
- (void)setIsNewEncrypt:;
- (long long)isNewEncrypt;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithContent:;
- (void)setMd5:;
- (id)md5;
- (id)contentDictionary;
- (void)setVid:;
- (id)vid;
@end
