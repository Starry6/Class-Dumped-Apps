@interface AWEIMSkylightLongPressInfoModel : NSObject
@property (nonatomic) Q longPressType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString iconUrlDark;
@property (nonatomic) NSString schema;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)iconUrlDark;
- (void)setIconUrlDark:;
- (unsigned long long)longPressType;
- (void)setLongPressType:;
- (id)getContentDict;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithDictionary:;
@end
