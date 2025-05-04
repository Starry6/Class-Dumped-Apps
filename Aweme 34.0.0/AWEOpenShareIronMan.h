@interface AWEOpenShareIronMan : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString startPageURL;
@property (nonatomic) NSString thirdAppSchema;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)startPageURL;
- (id)thirdAppSchema;
- (id)anchorJSONString;
- (void)setStartPageURL:;
- (void)setThirdAppSchema:;
- (void)setIdentifier:;
- (id)extra;
- (id)identifier;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
