@interface AWECoverTextTitleModel : NSObject
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSNumber title_id;
@property (nonatomic) NSString content;
@property (nonatomic) NSString source;
- (id)title_id;
- (id)content;
- (BOOL)isDefault;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)trackInfo;
+ (id)objectWithDictionary:;
+ (id)defaultItem;
@end
