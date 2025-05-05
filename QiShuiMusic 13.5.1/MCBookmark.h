@interface MCBookmark : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString path;
- (id)path;
- (void)setPath:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (id)initWithSerializableDictionary:;
- (id)serializableDictionary;
@end
