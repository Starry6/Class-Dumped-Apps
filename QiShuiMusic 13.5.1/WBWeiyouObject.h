@interface WBWeiyouObject : NSObject
@property (nonatomic) NSString object_id;
@property (nonatomic) NSString short_url;
@property (nonatomic) NSString title;
@property (nonatomic) NSString url;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString summary;
- (void)setShort_url:;
- (id)short_url;
- (id)validate;
- (id)url;
- (void)setTitle:;
- (void)setSummary:;
- (void)setUrl:;
- (id)summary;
- (id)title;
- (void).cxx_destruct;
- (void)setObject_id:;
- (void)setImageURL:;
- (id)object_id;
- (id)imageURL;
+ (id)dictionaryWithVideoObject:;
+ (id)weiYouObjectWithDictionary:;
+ (id)object;
@end
