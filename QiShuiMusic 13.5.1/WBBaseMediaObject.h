@interface WBBaseMediaObject : NSObject
@property (nonatomic) NSString objectID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString description;
@property (nonatomic) NSData thumbnailData;
@property (nonatomic) NSString scheme;
- (void)storeToDictionary:;
- (id)validate;
- (id)objectID;
- (void)setObjectID:;
- (void)setScheme:;
- (id)scheme;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (void)setDescription:;
- (id)thumbnailData;
- (void)setThumbnailData:;
- (void)loadFromDictionary:;
+ (id)dictionaryWithMediaObject:;
+ (id)mappedMediaObjectWithDictionary:;
+ (void)nothing;
+ (id)object;
@end
